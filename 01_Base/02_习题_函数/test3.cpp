//
// Created by wangd on 2026/8/22.
//
//                                              ASCII码排序
/*
 * 输入三个字符后，按各字符的ASCII码从小到大的顺序输出这三个字符
 * 输入  输入数据有多组，每组占一行，有三个字符组成，之间无空格
 * 输出  对于每组输入数据，输出一行，字符中间用一个空格分开
 */

#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    string s;
    while (cin >> s) {
        sort(s.begin(), s.end());
        cout << s[0] << " " << s[1] << " " << s[2] << endl;
    }

    return 0;
}