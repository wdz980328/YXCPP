//
// Created by wangd on 2026/7/22.
//
//                                   浮点型 float / double
//
// 【知识点说明】
// 浮点型用于表示带小数点的实数，例如 3.1415926。
// C++ 中常用的浮点类型有 float（单精度）和 double（双精度）。
//
// 概念要点：
// 1. float  占 4 字节，有效数字约 6~7 位。
// 2. double 占 8 字节，有效数字约 15~16 位，精度更高。
// 3. 浮点数可用科学计数法表示，例如 1.5e5 表示 1.5 × 10^5 = 150000。
// 4. setprecision(n) 可设置输出时保留的有效数字位数（需包含 <iomanip>）。
//
// 注意事项：
// 1. 浮点数在计算机中是近似存储的，无法精确表示某些小数，因此判断两个
//    浮点数是否相等时不要用 ==，而应比较两者差值的绝对值是否小于一个
//    很小的数（如 0.0000001），即本示例中的 fabs(x-1)。
// 2. 直接书写的小数常量（如 3.14）默认是 double 类型；想明确表示 float
//    类型可写成 3.14f。
// 3. float 精度有限，超出其有效位数的小数部分会丢失。

#include <iomanip>      // 提供 setprecision 等输出格式控制
#include <iostream>     // 提供输入输出流
#include <cmath>        // 提供 fabs（取绝对值）等数学函数

using namespace std;

/*
 * float    4字节 0000
 * double   8字节 00000000
 */

int main()
{
    float a = 3.1415926;   // 单精度浮点数 a
    double b = 3.1415926;  // 双精度浮点数 b，精度比 float 高
    double c = 1.5e5;      // 科学计数法：1.5 × 10^5 = 150000

    cout << a << endl;     // 默认输出 float，约保留 6 位有效数字
    cout << b << endl;     // 默认输出 double

    cout << setprecision(10) << a << endl;  // 设置 10 位有效数字输出 a
    cout << setprecision(20) << a << endl;  // 设置 20 位有效数字，可见 float 精度不足
    cout << c << endl;     // 输出 c（150000）

    double x = 1.0 / 234324247 * 234324247;  // 本应等于 1，因浮点误差可能略偏离 1
    if (fabs(x-1) < 0.0000001) {             // 用差值绝对值判断 x 是否"约等于"1
        cout << "hhh" << endl;
    }
    cout << x << endl;     // 输出 x 的实际值

    return 0;
}
