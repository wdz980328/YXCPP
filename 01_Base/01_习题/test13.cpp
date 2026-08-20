// 成绩转换

/*
 * 输入一百分制的成绩，将其转换成对应的等级，具体转换规则如下：
 * 90-100为A
 * 80-89为B
 * 70-79为C
 * 60-69为D
 * 0-59为E
 *
 * 输入：输入数据有多组，每组占一行，由一个整数组成
 *
 * 输出：对于每组输入数据，输出一行，如果输入数据不在0-100范围内，请输出一行：“Score is error！”
 */

#include <iostream>
using namespace std;

int main()
{
    int x;
    while (cin >> x) {
        char ret = '\0';
        if (x >= 90 && x <=100) {
            ret = 'A';
        }
        else if (x >= 80 && x <=89) {
            ret = 'B';
        }
        else if (x >= 70 && x <=79) {
            ret = 'C';
        }
        else if (x >= 60 && x <=69) {
            ret = 'D';
        }
        else if (x >= 0 && x <=59) {
            ret = 'E';
        }
        if (ret == '\0') {
            cout << "Score is error！" << endl;
        }
        else {
            cout << ret << endl;
        }

    }

    return 0;
}