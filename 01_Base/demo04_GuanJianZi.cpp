//
// Created by wangd on 2026/7/19.
//
//                                      关键字
//
// 【知识点说明】
// 关键字（keyword）是 C++ 语言预先定义、具有特殊含义的单词，
// 不能用作变量名、函数名等标识符。
//
// 概念要点：
// 1. 本文件中的 int、return、using、namespace 等都是关键字；
//    而 #include 属于预处理指令，不是关键字。
// 2. C++ 中有 90 多个关键字，常见的有：
//    数据类型类：int、char、float、double、bool、void 等；
//    控制流程类：if、else、for、while、switch、break、continue、return 等；
//    其他：class、struct、const、using、namespace、new、delete 等。
//
// 注意事项：
// 1. 关键字不能作为变量名/函数名，例如不能写 int int = 1;
// 2. 关键字全部由小写字母组成。
// 3. 定义标识符（变量名、函数名等）时要注意避开所有关键字。

#include <iostream>      // 预处理指令：引入头文件（#include 是预处理指令，非关键字）

using namespace std;     // using、namespace 是关键字


int main()               // int 是关键字（表示返回类型），main 是函数名
{


    return 0;            // return 是关键字，用于返回函数值
}
