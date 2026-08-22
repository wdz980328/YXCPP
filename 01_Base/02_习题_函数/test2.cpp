//
// Created by wangd on 2026/8/22.
//
//                                          计算两点间的距离
/*输入两点坐标（X1，Y1），（X2, Y2）,计算并输出两点间的距离
 *输入数据有多组，每组占一行，由4个实数组成，分别表示x1，y1，x2，y2，数据之间用空格隔开
 *输出 对于每组输入数据，输出一行，结果保留两位小数
 */

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x1,y1,x2,y2;
    while (cin >> x1 >> y1 >> x2 >> y2) {
        double d = (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2);
        sqrt(d);
        printf("%.2f\n", d);
    }

    return 0;
}