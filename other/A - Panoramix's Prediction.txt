// https://codeforces.com/contest/80/problem/A

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

    int n, m; cin >> n >> m;

    int prime[15] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};

    for (int i = 0; i < 15; ++i) {
        if (n == prime[i] && m == prime[i+1]) {
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";

    return 0;
}