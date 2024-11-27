#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    int arr[n] = {};
    for (int i = 0; i < m; i++) {
        int p, q, r;
        cin >> p >> q >> r;
        for (int j = p; j <= q; j++) {
            arr[j-1] = r;
        }
    }

    for (int i : arr)
        cout << i << " ";
} 