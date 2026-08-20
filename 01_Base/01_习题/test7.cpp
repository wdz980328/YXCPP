//
// Created by wangd on 2026/8/10.
//
/*
 * 输入：反复输入 a 和 b
 * 输出：输出 a 和 b 的和，并且带上一个换行
 */

#include <iostream>


using namespace std;

int main()
{
    int a,b;
    while (cin>> a >> b) {
        cout << a + b << endl;
    }

    return 0;
}