//
// Created by wangd on 2026/7/22.
//
#include <iomanip>
#include <iostream>
#include <cmath>

using namespace std;

/*
 * float    4字节 0000
 * double   8字节 00000000
 */

int main()
{
    float a = 3.1415926;
    double b = 3.1415926;
    double c = 1.5e5;

    cout << a << endl;
    cout << b << endl;

    cout << setprecision(10) << a << endl;
    cout << setprecision(20) << a << endl;
    cout << c << endl;

    double x = 1.0 / 234324247 * 234324247;
    if (fabs(x-1) < 0.0000001) {
        cout << "hhh" << endl;
    }
    cout << x << endl;

    return 0;
}