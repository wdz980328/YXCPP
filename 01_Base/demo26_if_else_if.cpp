//
// Created by wangd on 2026/7/26.
//
#include <iostream>
using namespace std;

int main()
{
    int score = 88;

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
        cout << "不及格" << endl;
    }

    return 0;
}