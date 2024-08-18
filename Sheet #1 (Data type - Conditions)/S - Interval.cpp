// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/S

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

    float x; cin >> x;
    if (x >= 0 && x <= 25){
        cout << "Interval [0,25]";
    }else if (x > 25 && x <= 50){
        cout << "Interval (25,50]";
    }else if (x > 50 && x <= 75){
        cout << "Interval (50,75]";
    }else if (x > 75 && x <= 100){
        cout << "Interval (75,100]";
    }else {
        cout << "Out of Intervals";
    }

    return 0;
}