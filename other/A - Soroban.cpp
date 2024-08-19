//https://codeforces.com/contest/363/problem/A

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
        string n;
        cin >> n;
        reverse(n.begin(), n.end());

        for (int i = 0; i < n.size(); ++i) {
            if (n[i] == '0') {
                cout << "O-|-OOOO\n";
            } else if (n[i] == '1') {
                cout << "O-|O-OOO\n";
            } else if (n[i] == '2') {
                cout << "O-|OO-OO\n";
            } else if (n[i] == '3') {
                cout << "O-|OOO-O\n";
            } else if (n[i] == '4') {
                cout << "O-|OOOO-\n";
            } else if (n[i] == '5') {
                cout << "-O|-OOOO\n";
            } else if (n[i] == '6') {
                cout << "-O|O-OOO\n";
            } else if (n[i] == '7') {
                cout << "-O|OO-OO\n";
            } else if (n[i] == '8') {
                cout << "-O|OOO-O\n";
            } else if (n[i] == '9') {
                cout << "-O|OOOO-\n";
            }
        }
    }
}
