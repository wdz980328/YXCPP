//
// Created by wangd on 2026/7/24.
//
//                                                                  赋值运算符

#include <iostream>

using namespace std;

int main()
{
    int x = 6;
    int y = 9;

    x = y;  //将y赋值给x
    cout << x << endl;

    x += y; // x = x+y;
    cout << x <<endl;

    x -= y; // x = x-y;
    cout << x <<endl;

    x *= y; // x = x * y;
    cout << x <<endl;

    x /= y; // x = x / y;
    cout << x <<endl;



    return 0;
}