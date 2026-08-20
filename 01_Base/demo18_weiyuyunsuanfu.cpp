//
// Created by wangd on 2026/7/25.
//
//                                              位与运算符
#include <iostream>

using namespace std;

int main()
{
    // 二元运算符 & 有0必0
    int a = 0b1010;
    int b = 0b0110;
    cout << (a & b) << endl;

    // 奇偶性
    cout << 5 % 2 << endl;
    cout << (5 & 1) << endl;

    // 获取一个数二进制的后五位
    int c = 0b1010010101001;
    cout << (c & 0b11111) << endl;

    // 将末5位归零
    int d = 0b1111111111111111;
    cout << (c & d) << endl;

    // 消除末尾连续的1
    int e = 0b101010111111;
    cout << (e & (e + 2)) << endl;

    // 2的幂判定
    int f = 0b100000000;
    (f > 0) && ((f & (f - 1)) == 0);

    return 0;
}