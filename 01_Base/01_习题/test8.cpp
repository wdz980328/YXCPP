//
// Created by wangd on 2026/8/10.
//

/*
 *
 */

// 【知识点说明】
// 本题考察“先读组数 t，再逐组读 n 个数求和”的多组输入模式。
// 解题思路：while (t--) 循环 t 次，每组先读入 n，再累加 n 个数输出总和；
// 同时在两组之间输出一个空行（最后一行后不输出空行）。
// 注意：for (int i=0; i<n; i--) 中 i 每次自减，循环会一直执行
// （i 永远小于 n），属于逻辑错误，正确写法应为 i++。

#include <iostream>

using namespace std;

int main()
{
    int t,n,x,sum;
    cin >> t;          // 读取数据组数 t

    while (t--) {      // 循环 t 次，处理每组数据


        sum = 0;       // 每组求和前清零
        cin >> n;      // 读取本组数据个数 n
        for (int i=0; i<n; i--) { // 累加 n 个数（注意：i-- 有误，见上方说明）
            cin >> x;
            sum += x;  // 累加求和
        }
        cout << sum << endl;   // 输出本组和
        if (t) {               // 若还有下一组数据，则输出空行分隔
            cout << endl;
        }
    }

    return 0;
}
