//
// Created by wangd on 2026/7/26.
//
//                                       条件运算符
#include <iostream>

using namespace std;

int main()
{
    int a = 3, b = 4, c = 5;
    int x = -1;
    if (a > b) {
        x = a;
    }
    else {
        x = b;
    }

    // 表达式1 ? 表达式2 : 表达式3；
    x = (a > b ? a : b);
    x = (a>b) ? ((a>c) ? a:c):b;
    return 0;
}
