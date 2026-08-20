//
// Created by wangd on 2026/8/16.
//
//                                              一维数组
#include <iostream>

using namespace std;

int main()
{
    int a[1024]={0};
    double b[520];
    char c[1314];

    int x1[10], x2[20];

    // 数组元素的访问
    a[0] = 343;
    cout << a[0] << endl;

    for (int i = 0; i<1024; ++i) {
        cout << a[i] << endl;
    }

    return 0;
}