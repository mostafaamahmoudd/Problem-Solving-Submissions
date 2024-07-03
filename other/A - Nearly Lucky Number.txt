//https://codeforces.com/contest/110/problem/A

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

    string s; cin >> s;

    ll cnt = 0;
    for (int i = 0; i < s.size(); ++i)
        if (s[i] == '4' || s[i] == '7') ++cnt;

    string x = to_string(cnt);
//    cout << x << '\n';

    cnt = 0;
    for (int i = 0; i < x.size(); ++i)
        if (x[i] == '4' || x[i] == '7') ++cnt;

    if (cnt == x.size()) cout << "YES";
    else cout << "NO";

    return 0;
}