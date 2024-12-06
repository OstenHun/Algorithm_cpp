#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int k, q, r, b, kn, p;
    cin >> k >> q >> r >> b >> kn >> p;

    cout << 1-k << " " << 1-q << " " << 2-r << " " << 2-b << " " << 2-kn << " " << 8-p;
}