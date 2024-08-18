//https://codeforces.com/contest/551/problem/A

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

    int n, t;
    cin >> n;
    vector <int> a;

    for (int i = 0; i < n; ++i) {
        cin >> t;
        a.push_back(t);
    }

    for (int i = 0; i < n; ++i) {
        int s = 1;
        for (int j = 0; j < n; ++j) {
            if (a[i] < a[j]) ++s;
        }
         cout << s << ' ';
    }

    return 0;
}