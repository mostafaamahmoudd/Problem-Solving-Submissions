// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/X

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

    int l1, r1, l2, r2; cin >> l1 >> r1 >> l2 >> r2;
    int min_ = max(l1, l2);
    int max_ = min(r1, r2);
    if(min_ > max_)
        cout << -1;
    else
        cout << min_ << " " << max_;

    return 0;
}