//https://codeforces.com/contest/278/problem/A

#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define pi acos(-1)
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

    int n, d, f[100+2] = {0}, s, t;
    cin >> n;
    for (int i = 2; i < n + 2; ++i){
        cin >> d;
        f[i] = f[i-1] + d;
    }

    cin >> s >> t;
    if (s > t) swap(s, t);
    
    int distance = f[t] - f[s];
    cout << min(distance, (f[n+1] - distance)) << '\n';

    return 0;
}