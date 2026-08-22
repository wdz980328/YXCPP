//
// Created by wangd on 2026/8/17.
//

// 【知识点说明】
// 本题综合考察二维数组的存储与遍历、平均值计算以及多条件统计。
// 设 a[i][j] 表示第 i 个学生第 j 门课的成绩（共 n 个学生、m 门课）：
//   1. sa[i] 计算每个学生 m 门课的平均成绩（按行求平均）；
//   2. ca[j] 计算每门课所有学生的平均成绩（按列求平均）；
//   3. cnt 统计“每门课都达到该门课平均分”的学生数。
// 解题思路：两层 for 循环分别按行、按列累加求平均，再逐行判断
// 该生是否每科成绩都不低于对应科目的平均分，全部满足则计数加一。

#include <iostream>

using namespace std;

double a[51][7];   // 学生成绩二维数组：最多 50 个学生、6 门课（下标留有余量）
double sa[51];     // 每个学生的平均成绩
double ca[6];      // 每门课的平均成绩

int main()
{
    int n,m;
    while (cin >> n>> m) {       // 反复读取学生数 n 和科目数 m
        for (int i = 0; i<n; ++i) {
            for (int j = 0; j<m; ++j) {
                cin >> a[i][j];  // 读入成绩矩阵
            }
        }
        for (int i=0; i<n; ++i) {    // 计算每个学生的平均成绩
            sa[i] = 0;
            for (int j=0; j<m; ++j) {
                sa[i] += a[i][j];    // 累加该生各科成绩
            }
            sa[i] /= m;              // 除以科目数求平均
        }
        for (int i=0; i<m; ++i) {    // 计算每门课的平均成绩
            ca[i] = 0;
            for (int j=0; j<n; ++j) {
                ca[i] += a[j][i];    // 累加该科所有学生成绩（注意行列下标为 j,i）
            }
            ca[i] /= n;              // 除以学生数求平均
        }
        int cnt = 0;                 // 统计达标学生数
        for (int i = 0; i<n; ++i) {
            int sum = 0;
            for (int j=0; j<m; ++j) {
                sum += (a[i][j] >= ca[j]); // 该科成绩不低于该科平均分则加 1
            }
            if (sum == m) {          // 若每科都达标
                ++cnt;
            }
        }

        for (int i=0; i<n; ++i) {    // 输出每个学生的平均成绩
            if (i) {
                cout << ' ';         // 多个数据之间用空格分隔
            }
            printf("%.21f", sa[i]);  // 按高精度输出
        }
        cout << endl;

        for (int i=0; i<m; ++i) {    // 输出每门课的平均成绩
            if (i) {
                cout << ' ';
            }
            printf("%.21f", ca[i]);
        }
        cout << endl;

        cout << cnt << endl;         // 输出达标学生数

    }

    return 0;
}
