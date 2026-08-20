//
// Created by wangd on 2026/7/22.
//
//                                                                      字符串

#include <iostream>
#include <string>

using namespace std;

/*
 * char 变量名[] = "字符串常量"
 */

int main()
{
    char a[] = "英雄算法联盟";
    cout << sizeof(a) << endl;
    cout << a << endl;

    string b = "夜深人静写算法";
    cout << b + ";" << endl;

    return 0;
}