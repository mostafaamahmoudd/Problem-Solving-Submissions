//https://codeforces.com/contest/591/problem/A

#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include<numeric>
#include <stdlib.h>
#include<list>

#define ll long long

using namespace std;

void fast () {
    cin.sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

//const int maxInteger = 1e7;
//int counter[maxInteger];

//int Binary_Search (int arr[], int l, int h, int key){
//    while (l <= h){
//        int m = (l+h)/2;
//
//        if (arr[m] == key) return m;
//
//        if (arr[m] > key) h = m-1;
//        else l = m+1;
//    }
//    return -1;
//}

int32_t main() {
    fast();

    double l, p, q; cin >> l >> p >> q;
    cout << fixed << setprecision(9) << (l*p)/(p+q);

    return 0;
}