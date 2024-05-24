// httpscodeforces.comgroupMWSDmqGsZmcontest219158problemE

#include <iostream>
#include <string>
#include<bits/stdc++.h>
#include <cmath>

using namespace std;

void fast () {
    cin.sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int32_t main() {
    fast();

    double pi = 3.141592653, r; cin >> r;
    double area = pi * r * r;

    cout << fixed << setprecision(9) << area;

    return 0;
}