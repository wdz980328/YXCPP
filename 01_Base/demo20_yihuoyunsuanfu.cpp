//
// Created by wangd on 2026/7/26.
//
//                                              异或运算符
 #include <iostream>

using namespace std;

int main()
{
    // 异或的定义
    int a = 0b1010;
    int b = 0b0110;
    cout << (a ^ b) << endl;

    // 标记位取反
    int c = 0b1000101;
    cout << (c ^ 0b1000) << endl;

    // 变量交换
    int d = 17;
    int e = 19;
    d = d ^ e;
    e = d ^ e;
    d = d ^ e;
    cout << d << " " << e << endl;

    // 3.1 任何数和0异或，还是它本身
    // 3.2 两个相同的数异或，结果为0
    // 3.3 异或满足交换律和结合律
    // 异或：不带进位的二进制加法

    // 4 出现奇数次的数

    // 5 加密
    int x = 1314;
    cout << "520" << x << endl;
    cout << "520" << (x^17) << endl;



    return 0;
}