// https://codeforces.com/contest/707/problem/A

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

const int maxInteger = 1e7;
int counter[maxInteger];

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

    int n, m; cin >> n >> m;

    char p[n][m];
    for (int i = 0; i < n; ++i) for (int j = 0; j < m; ++j) cin >> p[i][j];

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (p[i][j] == 'C' || p[i][j] == 'M' || p[i][j] == 'Y') {
                cout << "#Color";
                return 0;
            }
        }
    }

    cout << "#Black&White";


    return 0;
}