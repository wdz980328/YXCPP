//
// Created by wangd on 2026/8/16.
//
/*
 * 给你 n 个整数，求他们中所有奇数的乘积
 *
 * 输入：输入数据包含多个测试实例，每个测试实例占一行，每行的第一个数为n，表示本组数据一共有n个，接着是n个整数，你可以假设每组数据必定至少存在一个奇数
 * 输出：输出每组数中的所有奇数的乘积，对于测试实例，输出一行
 */

#include <iostream>

using namespace std;

int a[1000];

int main()
{
    int n;
    while (cin >> n) {
        for (int i = 0; i<n; ++i) {
            cin >> a[i];
        }
        int prod = 1;
        for (int i = 0; i<n; ++i) {
            if (a[i] %2) {
                prod *= a[i];
            }
        }
        cout << prod << endl;
    }

    return 0;
}