#include <bits/stdc++.h>
using namespace std;

double w, h, ret;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> w >> h;

    ret = w+h-sqrt(w*w+h*h);

    cout << fixed << setprecision(6) << ret << '\n';
}