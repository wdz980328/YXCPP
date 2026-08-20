//
// Created by wangd on 2026/8/12.
//
/*
 * 输入：输入数据有多行组成，首先是一个整数N，表示测试实例的个数，然后是N行数据，每行有6个整数，AH,AM,AS,BH,BM,BS,分别表示时间A和B所对应的时分秒，题目保证所有的数据合法
 * 输出：对于每个测试实例，输出A+B，每个输出结果也是由时分秒三部分组成，同时也要满足时间的规则，每个输出占一行。并且所有的部分都可以用32位整数表示
 */

// 输入一个t，代表t组数据，每组数据输入两个时间，时间分别为时分秒
//输出：输出t行，每行是一个时间，代表这组数据下的两个时间加和，注意考虑进位

#include <iostream>

using namespace std;

int main()
{
    int t;
    int ah,am,as;
    int bh,bm,bs;
    cin >> t;
    while (t--) {
        cin >> ah >> am >> as;
        cin >> bh >> bm >> bs;
        as += bs;
        am += bm;
        ah += bh;

        am += as / 60;
        as %= 60;

        ah += am /60;
        am %= 60;

        cout << ah << ' ' << am << ' ' << as << endl;
    }

    return 0;
}