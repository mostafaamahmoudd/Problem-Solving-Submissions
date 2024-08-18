// https://codeforces.com/contest/469/problem/A

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

    int n; cin >> n;

    int p; cin >> p;
    int x[p];
    for (int i = 0; i < p; ++i) cin >> x[i];

    int q; cin >> q;
    int y[q];
    for (int i = 0; i < q; ++i) cin >> y[i];

    for (int i = 0; i < p; ++i) ++counter[x[i]];
    for (int i = 0; i < q; ++i) ++counter[y[i]];

    int cnt = 0;
    for (int i = 1; i <= n; ++i) {
        if (counter[i] > 0) ++cnt;
        else {
            cout << "Oh, my keyboard!";
            return 0;
        }
    }

    cout << "I become the guy.";

    return 0;
}