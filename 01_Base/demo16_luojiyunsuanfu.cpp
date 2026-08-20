//
// Created by wangd on 2026/7/24.
//
//                                                                  逻辑运算符           与 或 非
/*
 * 与 &&
 * 或 ||
 * 非 !
 */


#include <iostream>

using namespace std;

int main()
{
    // 与 有假必假
    cout << (0 && 0) << endl;
    cout << (0 && 1) << endl;
    cout << (1 && 0) << endl;
    cout << (1 && 1) << endl;

    cout << "----" << endl;

    // 或 有真必真
    cout << (0 || 0) << endl;
    cout << (0 || 1) << endl;
    cout << (1 || 0) << endl;
    cout << (1 || 1) << endl;

    cout << "----" << endl;

    // 非 非真即假 非假即真
    cout << !0 << endl;
    cout << !2 << endl;

    cout << "----" << endl;

    int a = !(5>4) && (7-8) && (0-1);
    cout << a << endl;

    int b = !(1 || 1 && 0);
    cout << b << endl;

    return 0;
}


