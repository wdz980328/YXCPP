//
// Created by wangd on 2026/7/23.
//
//                                                      取模运算符

#include <iostream>

using namespace std;

int main()
{
    int a = 100;
    int b = 9;
    cout << a % b << endl;

    a = -100;
    b = 9;
    cout << a % b << endl;

    a = 100;
    b = -9;
    cout << a % b << endl;

    a= -100;
    b = -9;
    cout << a % b << endl;

    return 0;
}