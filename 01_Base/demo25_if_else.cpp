//
// Created by wangd on 2026/7/26.
//
//        if else 语句
//
// 【知识点说明】
// if else 语句在 if 的基础上增加了一个“否则”分支：条件为真时执行 if 分支，
// 条件为假时执行 else 分支，两条分支只会执行其中一条。
//
// 语法规则：
//     if (条件表达式)
//     {
//         语句块1;   // 条件为真时执行
//     }
//     else
//     {
//         语句块2;   // 条件为假时执行
//     }
//
// 注意事项：
// 1. if 分支与 else 分支互斥，一次只会执行其中一条。
// 2. else 不能单独使用，必须与 if 配对，且其自身没有条件表达式。
// 3. else 会与离它最近的、尚未配对的 if 结合，书写时注意缩进清晰。

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int score = 75;

    // 判断成绩是否大于等于 60 分
    if (score >= 60)
    {
        cout << "及格" << endl;   // 条件为真，输出“及格”
    }
    else
    {
        cout << "不及格" << endl; // 条件为假，输出“不及格”
    }

    return 0;
}
