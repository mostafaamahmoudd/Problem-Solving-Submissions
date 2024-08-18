// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/L

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

    string f1, s1, f2 , s2;
    cin >> f1 >> s1;
    cin >> f2 >> s2;

    if (s1 == s2){
        cout << "ARE Brothers";
    }else {
        cout << "NOT";
    }

    return 0;
}