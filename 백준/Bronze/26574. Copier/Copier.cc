#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> ans;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    for (int i = 0; i < n; i++) {
        int nm;
        cin >> nm;
        ans.push_back(nm);
    }

    for (auto i : ans) {
        cout << i << ' ' << i << '\n';
    }

    return 0;
}
