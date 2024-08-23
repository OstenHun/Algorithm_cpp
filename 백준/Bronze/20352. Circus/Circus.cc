#include <bits/stdc++.h>
using namespace std;

double a, r, ret; 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> a;
    a /= M_PI;
    r = sqrt(a);
    ret = 2*r*M_PI;

    cout << fixed << setprecision(7) << ret << '\n';
}