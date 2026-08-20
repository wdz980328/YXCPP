//
// Created by wangd on 2026/8/10.
//
// 输入一个n，然后n个整数
// 输出：n行，每行一个整数，代表所有这一行输入的元素之和

#include <iostream>

using namespace std;


int main()
{
    int n,x,sum;
    while (cin >> n) {
        sum = 0;
        for (int i=0; i<n; i++) {
            cin >> x;
            sum += x;
        }
        cout << sum << endl;
    }

    return 0;
}

