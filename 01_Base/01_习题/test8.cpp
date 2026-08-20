//
// Created by wangd on 2026/8/10.
//

/*
 *
 */

#include <iostream>

using namespace std;

int main()
{
    int t,n,x,sum;
    cin >> t;

    while (t--) {


        sum = 0;
        cin >> n;
        for (int i=0; i<n; i--) {
            cin >> x;
            sum += x;
        }
        cout << sum << endl;
        if (t) {
            cout << endl;
        }
    }

    return 0;
}