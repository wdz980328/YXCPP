//
// Created by wangd on 2026/8/10.
//
/*
 * 输入：反复输入 a 和 b
 * 输出：输出 a 和 b 的和，并且带上一个换行
 */

// 【知识点说明】
// 本题考察最基本的 A+B 问题以及“直到输入结束（EOF）”的多组输入模式。
// 解题思路：利用 while (cin >> a >> b) 持续读取，读不到数据时自动结束循环；
// 每次输出 a+b 并换行。

#include <iostream>


using namespace std;

int main()
{
    int a,b;
    // 反复读取 a、b，直到输入结束（EOF）
    while (cin>> a >> b) {
        cout << a + b << endl; // 输出和并换行
    }

    return 0;
}
