// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/R

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

    int n; cin >> n;
    int y = 0, m = 0, d = 0;

     y = n / 365;
     m = n % 365 / 30;
     d = n % 365 % 30;

    cout << y << " years" << "\n";
    cout << m << " months" << "\n";
    cout << d << " days" << "\n";

    return 0;
}