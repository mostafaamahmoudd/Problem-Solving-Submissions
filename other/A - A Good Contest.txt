//https://codeforces.com/contest/681/problem/A

#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <vector>
#include <map>
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

    int n; cin >> n;

    int cnt = 0;
    for (int i = 0; i < n; ++i) {
        string s; int b, a; cin >> s >> b >> a;

        if (a > b) {
            if (b >= 2400) ++cnt;
        }
    }

    if (cnt > 0) cout << "YES";
    else cout << "NO";

    return 0;
}