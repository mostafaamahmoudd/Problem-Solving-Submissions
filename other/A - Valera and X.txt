// https://codeforces.com/contest/404/problem/A

#include <iostream>
#include <bits/stdc++.h>
#include <string>
#define ll long long
#include <vector>
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

    int n; cin >> n;

    char ch[n][n];
    for (int i = 0; i < n; ++i) for (int j = 0; j < n; ++j) cin >> ch[i][j];

    int xCnt = 1;
    for (int i = 0; i < n-1; ++i) {
        if (ch[i][i] == ch[i+1][i+1]) ++xCnt;
    }

    int _xCnt = 1, idx = n-1;
    for (int i = 0; i < n-1; ++i) {
        if (ch[i][idx] == ch[i+1][idx -1]) ++_xCnt;
        --idx;
    }

    int rem = (n*n) - (xCnt + (_xCnt - 1));

    int other = 0;
    char c = ch[0][1];
    for (int i = 0; i < n; ++i) for (int j = 0; j < n; ++j) if (ch[i][j] == c) ++other;

    bool f1 = 0, f2 = 0;

    if (xCnt == _xCnt) f1 = 1;
    if (other == rem) f2 = 1;

    if (f1 && f2) cout << "YES";
    else cout << "NO";

    return 0;
}