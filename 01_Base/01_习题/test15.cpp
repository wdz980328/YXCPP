//
// Created by wangd on 2026/8/16.
//

/*
 * 输入：输入一个t，代表t组数据，每组数据输入一个n，以及n个浮点数
 * 输出：对于每组数据，输出这n个数中的最大值
 */

// 【知识点说明】
// 本题考察“求一组数中的最大值”以及浮点数的格式化输出。
// 解题思路：先设一个较小的初值 max（这里为 0），遍历 n 个数，
// 每读入一个数 x，若 x 大于当前 max 则更新 max，遍历结束后 max 即为最大值。
// 最后用 printf("%.2f\n", max) 保留两位小数输出。

#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;          // 读取数据组数 t
    while (t--) {      // 循环 t 次
        int n;
        double x;
        double max = 0;  // 最大值初始化为 0
        cin >> n;        // 读取本组数据个数 n
        for (int i = 0; i<n; ++i) {
            cin >> x;           // 读入每个浮点数
            if (x > max) {      // 若大于当前最大值则更新
                max = x;
            }
        }
        printf("%.2f\n", max);  // 保留两位小数输出最大值
    }

    return 0;
}
