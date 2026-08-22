//
// Created by wangd on 2026/8/22.
//
//                                              素数判定
/*
 * 对于表达式 n^2+n+41，当 n在（x，y）范围取整数值时，（包括x，y）（-39<=x<y<=50）判定该表达式的值是否都为素数
 * 输入数据有多组，每组占一行，由两个整数x，y组成，当x=0，y=0时，表示输入结束，该行不做处理
 * 对于每个给定范围内的取值，如果表达式的值都为素数，则输出OK，否则请输出Sorry，每组输出占一行
 */


#include <iostream>

// 有一个隐私叫 i，那么必然有另一个因子叫x/i
// i 和 x/i 必然有个大小关系，无论大小关系怎样，两数中，至少有一个小于等于根号x
bool isPrime(int x)
{
    for (int i=2; i*i<=x; ++i) {
        if (x % i == 0) {
            return false;
        }
    }
    return true;
}

using namespace std;

int main()
{

    int x, y;
    while (cin >> x >>y) {
        if (!x && !y) {
            break;
        }
        bool flag = false;
        for (int i = x; i <=y; ++i) {
            int z = i*i + i +41;
            if (!isPrime(z)) {
                flag = true;
                break;
            }
        }
        if (flag == false) {
            cout << "OK" << endl;
        }else {
            cout << "Sorry" << endl;
        }
    }

    return 0;
}