//
// Created by wangd on 2026/8/12.
//
/* 
 * 12. 定义f(a) = 1， f(a) = f(-1) ,f(B)=2, f(b)=2... f(Z)=26, f(z)=-26
 输入：输入一个t，代表t组数据，每组数据输入字符x和整数y
 输出：对于每组数据，输出y+f(x)的结果
*/
#include <iostream>

using namespace std;

int main()
{
    int t;
    while(t--){
        char s[3];
        char x;
        int y;
        int ans = 0;
        cin >> s;

        x = s[0];
        cin >> y;

        if(x >= 'A' && x <= 'Z'){
            ans = y + (x - 'A' + 1);
        }
        else if(x >= 'a' && x <= 'z'){
            ans = y - (x - 'a' + 1);
        }
        cout << ans << endl;
        

    }
}