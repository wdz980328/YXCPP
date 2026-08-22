//
// Created by wangd on 2026/8/12.
//




// 【知识点说明】
// 本题考察整除的判断：判断 a 能否被 b 整除，即 a 是否是 b 的倍数。
// 解题思路：若 a % b 的余数为 0，则说明 a 能被 b 整除，输出 "YES"，
// 否则输出 "NO"。题目还展示了三目运算符 ? : 的简洁写法。

#include <iostream>
using namespace std;

int main()
{
    int t,a,b,c;
    cin >> t;        // 读取数据组数 t
    while (t--) {    // 循环 t 次
        cin >> a >>b;
        c = a%b;     // 计算 a 除以 b 的余数
        if (c) {     // 余数非 0 表示不能整除
            cout << "NO" << endl;
        }else {      // 余数为 0 表示能整除
            cout << "YES" << endl;
        }
    }

    // 方法2
    // 三目运算符写法：条件 ? 值1 : 值2，条件为真取 YES，否则取 NO
    cout << (a % b == 0 ? "YES" : "NO") << endl;

    return 0;
}
