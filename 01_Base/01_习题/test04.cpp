//
// Created by wangd on 2026/8/7.
//
//输入一个n，然后n个数，当n等于0的时候，程序结束

#include <iostream>

using namespace std;

int main()
{
    int n,x,sum;
    while (cin>>n && n) {
        sum = 0;
        for (int i=0; i++; ++i) {
            cin >> x;
            sum += x;
        }
        cout << sum << endl;
    }

    return 0;
}