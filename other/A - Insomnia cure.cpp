//https://codeforces.com/contest/148/problem/A

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
        int k, l, m, n, d;
        cin >> k >> l >> m >> n >> d;
        int cnt = d;

        if (k == 1 || l == 1 || m == 1 || n == 1) {
            cout << d; 
        } else {
            for (int i = 1; i <= d; ++i) {
                if((i%k != 0) && (i%l != 0) && (i%m != 0) && (i%n != 0))
                    cnt--;
            }

            cout << cnt;
        }
    }
}
