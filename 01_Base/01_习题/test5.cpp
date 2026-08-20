//
// Created by wangd on 2026/8/8.
//
//
// 输入一个 t，代表有t组数据，每组数据输入一个n，然后n个数
//输出：对于t组数据，输出这n个数的和


#include <iostream>

using namespace std;

int main()
{
    int t,n,x,sum;

    cin >> t;
    while (t--) {
        cin >> n;
        for (int i=0; i<n; ++i) {
            cin >> x;
            sum += x;
        }
        cout << sum <<endl;
    }

    return 0;
}