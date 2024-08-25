#include <bits/stdc++.h>
using namespace std;

int n, x, y;
int minx, miny = INT_MAX;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        if (y < miny) {
            minx = x;
            miny = y;
        }
    }

    cout << minx << " " << miny;
}