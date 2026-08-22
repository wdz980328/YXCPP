//
// Created by wangd on 2026/7/26.
//
//        if else if 多分支
//
// 【知识点说明】
// 当需要处理多个互斥条件时，可以用 if ... else if ... else 构成多分支结构，
// 从上到下依次判断每个条件，一旦某个条件为真就执行对应分支并结束整个结构。
//
// 语法规则：
//     if (条件1)      { 语句块1; }
//     else if (条件2) { 语句块2; }
//     else if (条件3) { 语句块3; }
//     ...
//     else            { 语句块N; }   // 所有条件都不满足时执行
//
// 注意事项：
// 1. 判断是“从上到下依次进行”的，条件 1 不成立才判断条件 2，依此类推。
// 2. 只要有一个分支成立，其后的分支都不会再被执行。
// 3. 最后的 else 可以省略；若省略且所有条件都不成立，则整个结构不执行任何语句。
#include <iostream>
using namespace std;

int main()
{
    int score = 88;

    // 依次判断成绩所属的分数段，输出对应等级
    if (score >= 90)
    {
        cout << "优秀" << endl;
    }
    else if (score >= 80)
    {
        cout << "良好" << endl;
    }
    else if (score >= 60)
    {
        cout << "及格" << endl;
    }
    else
    {
        cout << "不及格" << endl;   // 以上条件都不满足时执行
    }

    return 0;
}
