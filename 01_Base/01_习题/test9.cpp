//
// Created by wangd on 2026/8/12.
//
/*
 * 小明今年3岁了，现在他已经能够认识100以内的非负整数，并且能够进行100以内的非负整数的加法计算
 * 对于大于等于100的整数，小明仅保留该数的最后两位进行计算，如果计算结果大于等于100，那么小明也仅保留计算结果的最后两位
 *
 */

#include <iostream>
using namespace std;

int main()
{
    int t, a, b, c;
    c = 0;
    cin >> t;
    while (t--) {
        cin >> a >> b;
        c = (a%100 + b%100) % 100;
    }
    cout << c <<endl;

    return 0;
}

