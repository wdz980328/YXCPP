//
// Created by wangd on 2026/7/23.
//
//                                                          算术运算符 + - * /

#include <iostream>

using namespace std;

int main()
{
    int a = 6;
    int b = 9;
    cout << a + b << endl;
    cout << a - b << endl;
    cout << a * b << endl;
    cout << a / b << endl;
    cout << a * 1.0 / b << endl;

    a = 10000000;
    b = 100000;
    cout << (long long)a * b << endl;   //超出整形范围，转换成 long long 类型

    return 0;
}