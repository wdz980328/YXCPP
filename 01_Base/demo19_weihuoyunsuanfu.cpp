//
// Created by wangd on 2026/7/26.
//
//                                                  位或运算符

#include <iostream>

using namespace std;

int main()
{
    // 位或 | 有1即1
    int a = 0b1010;
    int b = 0b0110;
    cout << (a | b) << endl;

    // 设置标记位
    int c = 0b100111;
    cout << (c | 0b1000) << endl;

    // 置空标记位
    int d = 0b000001;
    cout << ((c | d) -d) << endl;

    // 低位连续0变成1
    int e = 0b1010010000;
    cout << (e - (e - 1)) << endl;

    return 0;
}