//https://codeforces.com/contest/276/problem/A

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
        int n, k, f, time, joy, temp;
        cin >> n >> k >> f >> time;
        if (time > k)
        {
            joy = f - (time - k);
        }
        else
        {
            joy = f;
        }
        while (--n) {
            cin >> f >> time;

            if (time > k)
                temp = f - (time - k);

            else
                temp = f;
            
            if (temp > joy)
                joy = temp;
        }
        cout << joy << endl;
    }
}
