//
// Created by wangd on 2026/7/23.
//
//                                      数据的输入 cin
//
// 【知识点说明】
// cin 是 C++ 标准输入流对象（定义在 std 命名空间中），
// 配合 >>（流提取运算符）从键盘读取数据并存入变量。
//
// 概念要点：
// 1. 用法：cin >> 变量;
//    程序运行到 cin 时会暂停，等待用户从键盘输入数据并按回车确认。
// 2. cin 会根据变量的类型自动转换输入内容：
//    int 读入整数、double 读入小数、char 读入单个字符、
//    string 读入字符串、bool 读入布尔值（0 为假，非 0 为真）。
// 3. >> 可以连续使用，如 cin >> a >> b;。
//
// 注意事项：
// 1. 使用 cin 需包含头文件 <iostream>；使用 string 需包含 <string>。
// 2. cin 在遇到空格、Tab、回车时结束本次读取（对字符串而言只读到空格前）。
// 3. 用 cin >> char 读取的是单个字符，且会跳过前面的空白字符。
// 4. 与 cin 对应的输出是 cout（配合 << 流插入运算符）。

#include <iostream>     // 提供 cin、cout
#include <string>       // 提供 string 类型


using namespace std;


int main()
{
    int a = 5;                    // 定义 int 变量并初始化为 5
    cin >> a;                     // 从键盘读入一个整数存入 a
    cout << "a的值变成了：" << a << endl;

    double b = 7;                 // 定义 double 变量并初始化为 7
    cin >> b;                     // 从键盘读入一个小数存入 b
    cout << "b的值变成了：" << b << endl;

    char c = 5;                   // 定义 char 变量并初始化为字符编码 5
    cin >> c;                     // 从键盘读入一个字符存入 c
    cout << "c的值变成了：" << c << endl;

    string d = "";                // 定义空字符串 d
    cin >> d;                     // 从键盘读入一个字符串（遇到空格截止）存入 d
    cout << "d的值变成了：" << d << endl;

    bool e = false;               // 定义 bool 变量并初始化为 false
    cin >> e;                     // 从键盘读入 0 或非 0 存入 e（0→false，非 0→true）
    cout << "e的值变成了：" << e << endl;


    return 0;
}
