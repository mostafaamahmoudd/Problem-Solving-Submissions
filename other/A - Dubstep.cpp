// https://codeforces.com/contest/208/problem/A

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

    string s; cin >> s;

    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B') {
            s[i] = ' ';
            s.erase(i+1, 2);
        }
    }
    

    cout << s;

    return 0;
}