//
// Created by wangd on 2026/7/22.
//
//                                     布尔类型 bool
//
// 【知识点说明】
// 布尔类型（bool）用于表示逻辑上的"真"与"假"两种取值，
// 只有两个值：true（真）和 false（假），常用于条件判断。
//
// 概念要点：
// 1. bool 只占用 1 字节。
// 2. true 和 false 是 C++ 中 bool 类型的两个字面量（关键字）。
// 3. 直接输出 bool 变量时，true 显示为 1，false 显示为 0。
//
// 注意事项：
// 1. 在 C++ 中，非 0 的值在逻辑上都被视为"真"，0 被视为"假"。
// 2. bool 与 int 可以相互转换：true→1、false→0，反之非 0→true、0→false。
// 3. 命名 bool 变量时常用 is/has/can 等前缀（如 isOK、hasNext），
//    使其含义一目了然。

#include <iostream>

using namespace std;


int main()
{
    bool flag1 = false;             // 定义布尔变量 flag1，初始为假
    bool flag2 = true;              // 定义布尔变量 flag2，初始为真
    cout << flag1 << endl << flag2 << endl;  // 输出：0 换行 1

    return 0;
}
