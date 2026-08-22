//
// Created by wangd on 2026/8/2.
//
// 输入：反复输入 a 和 b，当 a 和 b 都等于 0 的时候，程序结束
// 输出：a 和 b 的和

// 【知识点说明】
// 本题考察“以特殊值作为结束标志”的多组输入模式。
// 题目要求反复读取 a、b，当两者同时为 0 时结束程序。
// 解题思路：外层用 while (cin >> a >> b) 持续读取，
// 在循环体内部用 if 判断是否为结束标志（0 0），若是则用 break 跳出循环。

#include<iostream>

using namespace std;

int main()
{
    int a, b;
    // 反复读取 a、b，直到输入结束
    while (cin >> a >>b) {
        // 若 a 和 b 都为 0（!a 等价于 a==0），则结束循环
        if (!a && !b) {
            break;
        }
        cout << a + b << endl; // 输出两者之和
    }
    return 0;
}
