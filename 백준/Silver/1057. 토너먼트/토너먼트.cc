#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, x, y;
    cin >> n >> x >> y;

    int cnt = 0;
    while (x != y) {
        x = (x+1) / 2;
        y = (y+1) / 2;
        cnt++;
    }

    cout << cnt;
}