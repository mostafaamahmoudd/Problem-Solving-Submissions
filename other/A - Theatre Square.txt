// https://codeforces.com/contest/1/problem/A

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

    ll n, m, a; cin >> n >> m >> a;
    ll x = (n+a-1)/a;
    ll y = (m+a-1)/a;

    cout << x*y;
    
    return 0;
}