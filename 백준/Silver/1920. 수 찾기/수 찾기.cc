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
        int x;
        cin >> x;

        auto it = lower_bound(a.begin(), a.end(), x);

        if (it != a.end() && *it == x) {
            cout << "1" << '\n';
        }
        else {
            cout << "0" << '\n';
        }
    }
}