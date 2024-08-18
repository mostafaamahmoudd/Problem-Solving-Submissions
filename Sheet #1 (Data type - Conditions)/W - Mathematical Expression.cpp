// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/W

#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <cmath>
#include <stdlib.h>

using namespace std;

void fast () {
    cin.sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int32_t main() {
    fast();

    int a, b, c; char s, q; cin >> a >> s >> b >> q >> c;

    if (s == '+'){
        if (a + b == c){
            cout << "Yes";
        }else {
            cout << a+b;
        }
    }else if (s == '-'){
        if (a - b == c){
            cout << "Yes";
        }else {
            cout << a-b;
        }
    }else if (s == '*'){
        if (a * b == c){
            cout << "Yes";
        }else {
            cout << a*b;
        }
    }

    return 0;
}