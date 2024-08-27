//https://codeforces.com/contest/424/problem/A

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
        int n, ans = 0, u = 0, l = 0;
        cin >> n;

        string s;
        cin >> s;

        for (int i = 0; i < n; ++i) {
            if (s[i] == 'x')
                ++l;
            else
                ++u;
        }

        if (u == l)
            cout << ans << '\n' << s;

        else {
            if (u > l) {
                ans = (n / 2) - l;
                int it = ans, i = 0;
                while (true) {
                    if (s[i] == 'X') {
                        s[i] = 'x';
                        --it;
                    }

                    if (it == 0)
                        break;

                    ++i;
                }
            } else {
                ans = (n / 2) - u;
                int it = ans, i = 0;
                while (true) {
                    if (s[i] == 'x') {
                        s[i] = 'X';
                        --it;
                    }

                    if (it == 0)
                        break;

                    ++i;
                }
            }

            cout << ans << '\n' << s;
        }
    }
}
