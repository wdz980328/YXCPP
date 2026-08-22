//
// Created by wangd on 2026/8/22.
//
//                      求绝对值
/*
 * 求实数的绝对值
 * 输入：输入数据有多组，每组占一行，每行包含一个实数
 * 对于每组输入数据，输出他的绝对值，要求每组数据输出一行，结果保留两位小数
 */

#include <iostream>
#include <cmath>

using namespace std;



int main()
{
    double x;
    while (cin >> x) {
        x = fabs(x);
        printf("%.2f\n", x);
    }

    return 0;
}