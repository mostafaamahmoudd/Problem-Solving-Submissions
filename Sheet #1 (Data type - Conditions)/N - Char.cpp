// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/N

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

    char x; cin >> x;

    if (x >= 65 && x <= 90){
        cout << (char)(x + 32);
    }else if (x >= 97 && x <= 122){
        cout << (char)(x - 32);
    }

    return 0;
}