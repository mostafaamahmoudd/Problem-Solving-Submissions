// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/K

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

    long long a, b, c; cin >> a >> b >> c;
    long long min, max;

    if (a >= b){
        if (a > c){
            if (b > c){
                min = c;
                max = a;
            }else {
                min = b;
                max = a;
            }
        }else {
            min = b;
            max = c;
        }
    } else if (b >= a){
        if (b > c){
            if (a > c){
                min = c;
                max = b;
            }else {
                min = a;
                max = b;
            }
        }else {
            min = a;
            max = c;
        }
    }else if (c >= a){
        if (c > b){
            if (b > a){
                min = a;
                max = c;
            }else {
                min = b;
                max = c;
            }
        }else {
            min = a;
            max = b;
        }
    }

    cout << min << " " << max;

    return 0;
}