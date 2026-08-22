//
// Created by wangd on 2026/7/19.
//
//                                      命名空间 namespace
//
// 【知识点说明】
// 命名空间（namespace）就像是一个容器或独立的区域，用来组织和管理代码中的
// 各种名称（变量、函数、类等），从而避免名称冲突。
//
// 概念要点：
// 1. 很多程序员共同编写代码时，很容易出现同名的情况，若无命名空间，
//    这些同名名称就会产生冲突、导致程序出错，命名空间可有效避免这种冲突。
// 2. C++ 标准库中的内容都定义在 std 命名空间中（如 std::cout、std::endl）。
// 3. using namespace std; 表示引入 std 命名空间，之后可直接写 cout、endl，
//    无需每次都写 std:: 前缀。
//
// 注意事项：
// 1. using namespace std; 会把整个 std 命名空间全部展开，在大型工程中
//    可能引发命名冲突，此时更推荐显式写成 std::cout。
// 2. 自定义命名空间使用语法：namespace 名称 { ... }。

#include <iostream>      // 头文件：提供输入输出流对象 cout/endl

using namespace std;     // 引入标准命名空间 std，省略 std:: 前缀

int main()               // 程序入口函数
{
    cout << "英雄算法联盟" << endl;  // cout 输出字符串，endl 换行

    return 0;            // 返回 0 表示程序正常结束
}
