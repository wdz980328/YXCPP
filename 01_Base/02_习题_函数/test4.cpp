//
// Created by wangd on 2026/8/22.
//
//                                  三角形
/*
 * 给定三条边，请你判断一下能不能组成一个三角形
 * 输入数据第一行包含一个数M，接下有M行，每行一个实例，包含三个正数A B C，其中 A，B，C < 1000；
 * 对于每个测试实例，如果三条边长A，B，C能组成三角形的话，输出YES，否则NO
 *
 * 测试例子：
3
3 4 5
1 2 3
2.5 3.5 4.5
YES

NO

YES
 *
 *
 */



#include <iostream>
#include <algorithm>

using namespace std;

double a[3];

int main()
{
    int t;
    cin >> t;
    while (t--) {
        cin >> a[0] >> a[1] >> a[2];
        sort(a, a+3);
        if (a[0] + a[1] > a[2]) {
            cout << "YES" << endl;
        }else {
            cout << "NO" << endl;
        }
    }

    return 0;
}