#include <bits/stdc++.h>
using namespace std;

int n, x, y;
vector<pair<int, int>> ax;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        ax.push_back(make_pair(x, y));        
    }
    
    sort(ax.begin(), ax.end());

    for (auto i : ax) cout << i.first << " " << i.second << '\n';
}