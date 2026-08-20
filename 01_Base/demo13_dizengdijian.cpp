//
// Created by wangd on 2026/7/23.
//
//                                                                  递增递减运算符

#include <iostream>

using namespace std;

int main()
{
    int i = 6;
    i++;
    cout << i << endl;
    ++i;
    cout << i << endl;

    int j = 8;
    int x = i++;    // 先赋值，再递增
    int y = ++j;    // 先递增，再赋值    效率高一点点

    cout << x << endl;
    cout << y << endl;

    return 0;
}