// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/Q

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

    float x, y; cin >> x >> y;

    if ((x > 0) && (y > 0)){
        cout << "Q1";
    }else if ((x < 0) && (y > 0)){
        cout << "Q2";
    }else if ((x < 0) && (y < 0)){
        cout << "Q3";
    }else if ((x > 0) && (y < 0)){
        cout << "Q4";
    }else if ((x == 0) && (y == 0)){
        cout << "Origem";
    }else if ((y == 0) && (x != 0)){
        cout << "Eixo X";
    }else if ((y != 0) && (x == 0)){
        cout << "Eixo Y";
    }

    return 0;
}