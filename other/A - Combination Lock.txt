//https://codeforces.com/contest/540/problem/A

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

    int n, cnt = 0; cin >> n;
    string str1, str2; cin >> str1 >> str2;

    int a[n];
    for (int i = 0; i < n; ++i) {
        int x = str1[i] - '0';
        a[i] = x;
    }

    int b[n];
    for (int i = 0; i < n; ++i) {
        int x = str2[i] - '0';
        b[i] = x;
    }

    for (int i = 0; i < n; ++i) {
        int mini = min(a[i], b[i]), maxi = max(a[i], b[i]);


        if (maxi - mini < 6) {
            cnt += maxi - mini;
        }
        else {
            cnt += (9 - maxi) + 1;
            cnt += mini - 0;
        }
    }

    cout << cnt;

    return 0;
}