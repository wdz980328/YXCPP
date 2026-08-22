//
// Created by wangd on 2026/8/2.
//
//               do while
//
// 【知识点说明】
// do while 循环是“直到型”循环：先执行一次循环体，再判断条件表达式，
// 条件为真（非 0）则继续循环，为假（0）则退出。
//
// 语法规则：
//     do
//     {
//         循环体;
//     } while (条件表达式);   // 注意末尾的分号不能省略
//
// 注意事项：
// 1. 与 while 的最大区别：do while 无论条件真假，循环体都至少执行一次。
// 2. while (条件) 后的分号必须写，否则会编译错误。
// 3. 循环体内同样需要存在能让条件最终变为假的语句，避免死循环。

#include <iostream>

using namespace std;

int main()
{
    int a = 3;
    // do while 会先执行循环体，再判断条件
    do {
        cout << a <<endl;   // 先输出 a 的值
        a += 1;             // 再让 a 加 1
    }while (a < 3);         // 条件不成立时才退出；因此本例循环体仍会执行一次
    cout << "---" << endl;

    a = 3;
    // 对照 while 循环：先判断条件，由于 3 < 3 为假，循环体一次都不会执行
    while (a<3) {
        cout << a << endl;
        a += 1;
    }
    return 0;
}
