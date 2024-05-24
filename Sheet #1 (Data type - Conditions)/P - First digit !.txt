// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/P

#include <iostream>
#include <string>
#include<bits/stdc++.h>
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

    string s; cin >> s;

    int x = (int)s[0];
    if (x % 2 == 0){
        cout << "EVEN";
    }else {
        cout << "ODD";
    }

    return 0;
}