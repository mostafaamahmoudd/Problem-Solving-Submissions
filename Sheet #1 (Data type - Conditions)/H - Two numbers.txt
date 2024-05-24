// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/H

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

    double a,b; cin >>a>>b;

    cout << "floor " << a << " / " << b << " = " << floor(a/b) << "\n";
    cout << "ceil " << a << " / " << b << " = " << ceil(a/b) << "\n";
    cout << "round " << a << " / " << b << " = " << round(a/b) << "\n";

    return 0;
}