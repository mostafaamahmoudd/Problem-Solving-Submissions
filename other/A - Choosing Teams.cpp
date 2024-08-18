//https://codeforces.com/contest/432/problem/A

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
        int n, k, teamsCnt = 0, cnt = 0;
        cin >> n >> k;

        int y[n];
        for (int i = 0; i < n; ++i)
            cin >> y[i];

        for (int i = 0; i < n; ++i) {
            if (5-y[i] >= k) ++cnt;

            if (cnt == 3) {
                cnt = 0;
                ++teamsCnt;
            }
        }

        cout << teamsCnt;
    }
}
