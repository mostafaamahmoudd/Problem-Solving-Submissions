// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/F

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

    string m, n; cin >> m >> n;
    m = m[m.length()-1]; n = n[n.length()-1];

    long long nm, nn;
    nm = stoll(m);
    nn = stoll(n);

    cout << nm + nn;
    return 0;
}