// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/V

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

    int a, b; char s; cin >> a >> s >> b;

    if (s == '>'){
        if (a > b){
            cout << "Right";
        }else {
            cout <<  "Wrong";
        }
    }else if (s == '<'){
        if (a < b){
            cout << "Right";
        }else {
            cout <<  "Wrong";
        }
    }else if (s == '='){
        if (a == b){
            cout << "Right";
        }else {
            cout <<  "Wrong";
        }
    }

    return 0;
}