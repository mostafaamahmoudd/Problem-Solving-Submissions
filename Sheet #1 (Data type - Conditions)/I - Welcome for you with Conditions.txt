// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/I

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

    int a, b; cin >> a >> b;
    if (a >= b){
        cout << "Yes";
    }else {
        cout << "No";
    }

    return 0;
}