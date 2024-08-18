// https://codeforces.com/contest/599/problem/A
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
        ll d1, d2, d3; cin >> d1 >> d2 >> d3;
        ll sum1 = d1+d2+d3, sum2 = d1+d1+d2+d2, sum3 = d1+d1+d3+d3, sum4 = d2+d2+d3+d3;
        ll mini1 = min(sum1, sum2);
        ll mini2 = min(sum3, sum4);
        ll ans = min(mini1, mini2);

        cout << ans;
    }
}
