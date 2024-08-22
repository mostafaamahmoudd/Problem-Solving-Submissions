//https://codeforces.com/contest/141/problem/A

#include <bits/stdc++.h>
typedef long long ll;
typedef long long ull;
typedef long double ld;
using namespace std;
const ld PI = acos(-1.0);
string ys = "YES", no = "NO";
void fast()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
int32_t main()
{
    fast();
    // freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
    // cout << setprecision(12) << fixed;
    int t = 1;
//    cin >> t;
    for (int tcc = 1; tcc <= t; tcc++) {
        string g, h, p, all;
        cin >> g >> h >> p;
        all = g+h;

        sort(all.begin(), all.end());
        sort(p.begin(), p.end());

        if (p == all)
            cout << ys;
        else
            cout << no;
    }
}
