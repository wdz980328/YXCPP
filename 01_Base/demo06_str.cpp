//
// Created by wangd on 2026/7/22.
//
//                                      字符型 char
//
// 【知识点说明】
// 本文件演示 char（字符型）。char 是字符串（string）的基本组成元素，
// 一个字符串本质上就是由多个 char 组成的字符序列。
//
// 概念要点：
// 1. char 占 1 字节，用来存储单个字符，用单引号表示，如 'y'。
// 2. 字符在计算机中以整数（ASCII 码）形式存储，例如 'y' 对应 121，
//    可通过 int(a) 查看其 ASCII 码值。
// 3. sizeof(a) 可得到 char 类型占用的字节数（通常为 1）。
//
// 注意事项：
// 1. 单个字符必须用单引号 '' 表示；双引号 "" 表示的是字符串（字符数组）。
// 2. char 本质上是小整数，可与 int 相互转换、参与整数运算。
// 3. ASCII 码中 'a'~'z'、'A'~'Z' 是连续递增的。

#include <iostream>

using namespace std;

int main()
{
    char a = 'y';         // 定义字符变量 a，值为字符 'y'
    char b = 'z';         // 定义字符变量 b，值为字符 'z'

    cout << a <<endl;          // 直接输出字符 a
    cout << int(a) << endl;    // 输出 a 的 ASCII 码值（'y' = 121）
    cout << int(b) << endl;    // 输出 b 的 ASCII 码值（'z' = 122）
    cout <<sizeof(a) << endl;  // 输出 char 类型占用的字节数（1）

    return 0;
}
