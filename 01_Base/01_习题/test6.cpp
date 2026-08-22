//
// Created by wangd on 2026/8/10.
//
// 输入一个n，然后n个整数
// 输出：n行，每行一个整数，代表所有这一行输入的元素之和

// 【知识点说明】
// 本题考察“每组先读个数 n，再读 n 个数求和”的多组输入模式，
// 并且每组求和前都要把 sum 清零（与 test5 形成对比）。
// 解题思路：while (cin >> n) 反复读取个数，循环体内先 sum = 0，
// 再用 for 累加 n 个数，最后输出总和。

#include <iostream>

using namespace std;


int main()
{
    int n,x,sum;
    // 反复读取每组数据的个数 n
    while (cin >> n) {
        sum = 0;             // 每组开始前清零，避免累加前一组结果
        for (int i=0; i<n; i++) {
            cin >> x;        // 读入每个数
            sum += x;        // 累加求和
        }
        cout << sum << endl; // 输出本组和
    }

    return 0;
}
