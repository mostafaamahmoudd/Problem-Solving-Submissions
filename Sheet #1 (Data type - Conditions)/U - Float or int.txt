// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/U

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

    float n; cin >> n;
    int new_n = n;
    float remainder = n - new_n;

    if (new_n - n == 0){
        cout << "int " << new_n;
    }else {
        cout << "float " << new_n << " " << fixed << setprecision(3) << remainder;
    }

    return 0;
}