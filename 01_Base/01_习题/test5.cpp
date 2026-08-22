//
// Created by wangd on 2026/8/8.
//
//
// 输入一个 t，代表有t组数据，每组数据输入一个n，然后n个数
//输出：对于t组数据，输出这n个数的和


// 【知识点说明】
// 本题考察“先给定组数 t，再逐组读 n 个数求和”的多组输入模式。
// 解题思路：用 while (t--) 精确循环 t 次，每组先读入个数 n，
// 再用 for 循环累加 n 个数并输出总和。
// 注意：sum 在循环外声明后未在每组内清零，会导致各组结果累加，
// 正确做法应在每组开始前加 sum = 0。

#include <iostream>

using namespace std;

int main()
{
    int t,n,x,sum;

    cin >> t;            // 读取数据组数 t
    while (t--) {        // 循环 t 次，处理每组数据
        cin >> n;        // 读取本组数据个数 n
        for (int i=0; i<n; ++i) { // 循环读入 n 个数
            cin >> x;
            sum += x;    // 累加求和
        }
        cout << sum <<endl; // 输出本组和
    }

    return 0;
}
