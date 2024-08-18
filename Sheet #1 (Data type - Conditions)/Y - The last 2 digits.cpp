// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/Y

#include <iostream>
#include <cmath>
#include<iomanip>
using namespace std;
 
int main() {
    long long n1, n2, n3, n4; cin >> n1 >> n2 >> n3 >> n4;
    int mul = n1 % 100;
    mul = mul * (n2 % 100);
    mul = mul * (n3 % 100);
    mul = mul * (n4 % 100);
    mul = mul % 100;
    cout << setw(2) << setfill('0') << mul << endl;
    return 0;
}
