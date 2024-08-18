//https://codeforces.com/contest/129/problem/A

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

    int a[n], sum = 0;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        sum += a[i];
    }

    int cnt = 0;
    for (int i = 0; i < n; ++i) {
        if ((sum - a[i]) % 2 == 0) ++cnt;
    }

    cout << cnt;

    return 0;
}