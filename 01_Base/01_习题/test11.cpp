//
// Created by wangd on 2026/8/12.
//





#include <iostream>
using namespace std;

int main()
{
    int t,a,b,c;
    cin >> t;
    while (t--) {
        cin >> a >>b;
        c = a%b;
        if (c) {
            cout << "NO" << endl;
        }else {
            cout << "YES" << endl;
        }
    }

    // 方法2
    cout << (a % b == 0 ? "YES" : "NO") << endl;

    return 0;
}
