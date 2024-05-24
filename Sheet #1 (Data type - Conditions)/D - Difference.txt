// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/D

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
 
    long long a, b, c, d; cin >> a >> b >> c >> d;
 
    cout << "Difference = " << (a*b) - (c*d);
 
    return 0;
}