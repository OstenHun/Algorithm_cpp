#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<int> v;
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        v.push_back(i);
    }

    int m;
    cin >> m;
    for (int i = 0; i < m; i++) {
        int p, q;
        cin >> p >> q;
        swap(v[p-1], v[q-1]);
    }

    for (int i : v) cout << i << " ";
}