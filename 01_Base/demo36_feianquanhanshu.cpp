//
// Created by wangd on 2026/8/22.
//
//                                      非安全函数
//
// 【知识点说明】
// C 语言标准库中存在一批“不安全函数”，例如 strcpy、strcat、sprintf、
// scanf、gets 等。这些函数的共同特点是不检查目标缓冲区的大小，
// 如果源数据长度超过缓冲区容量，就会发生缓冲区溢出（越界写入），
// 从而破坏相邻内存、导致程序崩溃，甚至被恶意利用造成安全漏洞。
//
// 为了解决这一问题，编译器（尤其是 MSVC）提供了带有 _s 后缀的
// “安全版本”函数，例如 strcpy_s、scanf_s 等。这些函数会额外接收
// 缓冲区大小参数，在写入前进行边界检查，从而避免溢出。
//
// 使用不安全函数时，编译器默认会给出安全警告（warning C4996）。
// 若暂时无法替换为安全版本，可通过下面的宏定义临时关闭该警告。

#define _CRT_SECURE_NO_WARNINGS   // 关闭 MSVC 对不安全函数的安全警告（C4996）
#include <cstring>                // 提供 strcpy 等字符串处理函数
#include <iostream>               // 提供标准输入输出流

using namespace std;              // 使用标准命名空间，省略 std:: 前缀



int main()
{
    int a;
    // scanf 是不安全函数（不限制输入长度），scanf_s 是它的安全版本，
    // 在 VS 中建议使用 scanf_s 替代 scanf。
    scanf_s("%d", &a);

    char str[10];
    // strcpy 是不安全函数：它不会检查目标数组 str 的容量，
    // 只会一直拷贝直到遇到源字符串末尾的 '\0'。
    // 这里 "hahhahaha" 共 9 个字符，加上结尾 '\0' 恰好 10 个字节，刚好占满 str。
    // 如果源字符串更长（例如 "hahhahahahaha"），就会发生缓冲区溢出。
    // 安全做法是改用 strcpy_s(str, sizeof(str), "hahhahaha")。
    strcpy(str, "hahhahaha");

    return 0;
}