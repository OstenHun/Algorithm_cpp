#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<int> a;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for (int i = 0; i < n; i++) {
        int nm;
        cin >> nm;
        a.push_back(nm);
    }

    sort(a.begin(), a.end());

    cin >> m;
    for (int i = 0; i < m; i++) {
        int nm;
        cin >> nm;
        auto it = lower_bound(a.begin(), a.end(), nm);
        if (it != a.end() && *it == nm) cout << "1 ";
        else cout << "0 ";
    }
}