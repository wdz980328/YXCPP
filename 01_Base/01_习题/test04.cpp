//
// Created by wangd on 2026/8/7.
//
//输入一个n，然后n个数，当n等于0的时候，程序结束

// 【知识点说明】
// 本题考察“每组先读个数 n，再读 n 个数求和”的多组输入模式，
// 同时把 n==0 作为结束标志：while (cin >> n && n) 中，当读到 0 时条件为假退出。
// 解题思路：每组的和 sum 先清零，再用 for 循环累加 n 个数，最后输出。
// 注意：本题的 for 循环写法 for (int i=0; i++; ++i) 中，
// 循环条件是 i++（先取 i 的旧值再自增），第一次判断时 i 为 0（假），
// 因此循环体不会执行，存在逻辑错误，正确写法应为 i<n。

#include <iostream>

using namespace std;

int main()
{
    int n,x,sum;
    // 反复读取个数 n；当 n 为 0 时结束循环
    while (cin>>n && n) {
        sum = 0;                 // 每组求和前先将 sum 清零
        for (int i=0; i++; ++i) { // 循环读入 n 个数（注意：循环条件有误，见上方说明）
            cin >> x;
            sum += x;            // 累加
        }
        cout << sum << endl;     // 输出本组和
    }

    return 0;
}
