//
// Created by wangd on 2026/8/2.
//

// 【知识点说明】
// 本题考察“先给定测试组数，再逐组处理”的多组输入模式。
// 与 test01 不同，这里第一行先给出组数 n，因此使用 while (n--)
// 精确循环 n 次，每次读取两个整数并输出它们的和。
// 解题思路：n 每循环一次减 1，直到减到 0 停止，正好处理 n 组数据。

#include <iostream>

using namespace std;

int main()
{
    int n, a, b;
    cin >> n;          // 先读取数据组数 n
    while (n--) {      // 循环 n 次，每处理一组 n 自减 1
        cin >> a >> b; // 读取一组中的两个整数
        cout << a+b << endl; // 输出两者之和
    }

    return 0;
}
