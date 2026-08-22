//
// Created by wangd on 2026/7/26.
//
//        switch 语句
//
// 【知识点说明】
// switch 语句是多分支选择结构，根据一个整型（或字符、枚举）表达式的值，
// 跳转到与之匹配的 case 分支执行；适合在多个固定取值之间进行选择。
//
// 语法规则：
//     switch (表达式)
//     {
//         case 常量1: 语句1; break;
//         case 常量2: 语句2; break;
//         ...
//         default: 语句N;   // 所有 case 都不匹配时执行
//     }
//
// 注意事项：
// 1. switch 括号中的表达式必须是整型、字符型或枚举类型，不能是浮点型或字符串。
// 2. 每个 case 后的值必须是常量表达式，且各 case 取值不能重复。
// 3. 每个分支末尾通常要加 break 跳出 switch，否则会发生“穿透”，
//    继续执行下一个 case 的语句；default 分支可以省略。
#include <iostream>

using namespace std;

int main()
{
    int a = 0;
    cin >> a;
    // 根据 a 的取值跳转到对应的 case 分支
    switch (a){
        case 0:
            cout << "Zero" << endl;
            break;              // 跳出 switch，防止穿透到下一个 case

        case 1:
            cout << "One" << endl;
            break;

        case 2:
            cout << "Two" << endl;
            break;

        case 3:
            cout << "Three" << endl;
            break;

        default:                // 以上 case 都不匹配时执行
            cout << "Beyond three or below zero" << endl;
    }

    return 0;
}
