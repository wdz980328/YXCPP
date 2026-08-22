//
// Created by wangd on 2026/8/22.
//
//            函数的声明
//
// 【知识点说明】
// 函数声明（又称函数原型）只写出函数的返回类型、函数名和参数列表，
// 不写函数体，用于在使用函数之前先“告诉”编译器该函数的存在。
//
// 语法规则：
//     返回类型 函数名(参数类型列表);   // 声明以分号结尾，可省略参数名
//
// 注意事项：
// 1. 若函数定义写在调用之后，则必须在调用之前先声明，否则编译器无法识别。
// 2. 声明中的参数名可以省略，只写类型即可，如 int add(int, int);
// 3. 函数可以声明多次，但只能定义一次；声明与定义的类型、参数必须一致。

#include <iostream>

using namespace std;
int add(int , int);  //函数的声明（函数原型）：只写类型，不写函数体
void  func2(int x);  //声明 func2，用于 func1 中提前调用
void  func1(int x);  //声明 func1，用于 func2 中提前调用

void  func1(int x)
{
    if (x<=0) {
        return;              // x 不大于 0 时直接返回，递归终止条件
    }
    cout << "func1: " << x << endl;
    func2(x-1);              // 调用 func2（前面已声明，故可调用）
}
void  func2(int x)
{
    cout << "func2: " << x << endl;
    func1(x-1);              // 调用 func1（前面已声明，故可调用）
}

int main()
{
    int x,y;
    cin >> x >> y;
    int z = add(x,y);        // 调用 add（前面已声明，定义在 main 之后）
    cout << z <<endl;


    return 0;
}

// add 的定义写在 main 之后，因此在调用前需要先有函数声明
int add(int a, int b)
{
    return a+b;
}
