//
// Created by wangd on 2026/7/26.
//
//                                           右移运算符
#include <iostream>

using namespace std;


int main()
{
    int a = 0b111;
    a = (a >> 1);
    cout << a << endl;

    //负数的右移
    int b = -1;
    cout << (-1 >> 1) << endl;

    // 去掉低 k 位
    int c = 0b10000101;
    cout << (c >> 7) << endl;

    // 取到第 低k 位的值
    int d = 0b101010101;
    cout << ((d >> 4) & 1) << endl;

    return 0;
}