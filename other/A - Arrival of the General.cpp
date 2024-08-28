//https://codeforces.com/contest/144/problem/A

#include <iostream>
#include <bits/stdc++.h>
#define ll long long
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

    int n , maxi = 0 , mini = 1e5 , a = 0 , b =0 ;
    cin >> n;
    for (int i = 0 ; i < n ; i++)
    {
        int q; cin >> q;
        if (q > maxi) {
            maxi = q;
            a = i;
        }

        if (q <= mini) {
            mini = q;
            b = i;
        }
    }

    if (a > b) cout << (a-1) + (n - (++b));
    else cout << (a - 1) + (n - b);


    return 0;
}