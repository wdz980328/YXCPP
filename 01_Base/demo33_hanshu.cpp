//
// Created by wangd on 2026/8/18.
//
//                                                  函数

#include <iostream>

using namespace std;

int add(int a, int b)
{
    int c = a+b;

    return c;
}


int main()
{
    int ret = add(1,7);
    cout << ret <<endl;


    return 0;
}

