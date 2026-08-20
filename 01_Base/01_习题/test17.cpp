//
// Created by wangd on 2026/8/16.
//

/*
 * 给定一段连续的整数，求出他们中所有偶数的平方和以及所有奇数的立方和
 *
 * 输入：输入数据包含多组测试实例，每组测试实例包含一行，由两个整数m和n组成
 *
 * 输出：对于每组输入数据，输出一行，应包括两个整数x和y，分别表示该段连续的整数中所有偶数的平方和以及所有奇数的立方和
 *
 */


#include <iostream>

using namespace std;

int main()
{
    int a[1234];
    int n,m;
    while (cin >> n >> m) {
        if (n>m) {
            int tmp = n; n=m; m = tmp;
        }
        int cnt = m-n+1;
        for (int i = n; i<= m; ++i) {
            a[i-n] = i;
        }
        int sum1 = 0, sum2 = 0;
        for (int i = 0; i<cnt; ++i) {
            if (a[i] % 2 == 0) {
                sum1 += a[i] * a[i];
            }
            else {
                sum2 += a[i] * a[i] * a[i];
            }
        }
        cout << sum1 << ' ' << sum2 << endl;
    }

    return 0;
}