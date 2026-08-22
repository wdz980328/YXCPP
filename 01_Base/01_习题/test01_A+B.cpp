//
// Created by wangd on 2026/8/2.
//

// 【知识点说明】
// 本题考察多组数据的输入输出：题目没有事先给出数据组数，
// 而是要求一直读取直到输入结束（EOF，End Of File）。
// 解题思路：利用 cin 的返回值特性——当读取成功时 while 条件为真，
// 一旦读到文件末尾或输入非法数据，cin 会返回“假”，循环自动结束。
// 本题也是最基础的整数加法（A+B 问题），用于练习 while 循环 + 输入输出。

#include <iostream>

using namespace std;

int main()
{
    int a,b;
    // 反复读取 a、b，直到输入结束（EOF）为止
    while (cin >> a >> b) {
        // 输出两数之和并换行
        cout << a + b << endl;
    }
    return 0;
}
