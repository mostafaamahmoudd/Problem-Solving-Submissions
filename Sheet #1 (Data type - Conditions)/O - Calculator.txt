// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/O

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

    char x;
    int a, b; cin >> a >> x >> b;

    if (x == '+')
        cout << a + b;
    else if (x == '-')
        cout << a - b;
    else if (x == '*')
        cout << a * b;
    else if (x == '/')
        cout << a / b;

    return 0;
}