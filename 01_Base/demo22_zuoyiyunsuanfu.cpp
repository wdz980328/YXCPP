//
// Created by wangd on 2026/7/26.
//
//                               左移运算符
#include <iostream>

// x << y  =      x * 2y

using namespace std;

int main()
{
    int x = 0b11;
    x = (x << 1);
    cout << x << endl;

    cout << (x << 4) <<endl;

    // 负数的左移
    int y = -1;
    y = (y << 1);
    cout << y << endl;

    // 左移负数位 ——不允许
    int z = 64;
    z = (z << (-1));
    cout << z << endl;

    // 左移溢出
    int a = 64;
    a = (a << 10);
    cout << a << endl;

    return 0;
}