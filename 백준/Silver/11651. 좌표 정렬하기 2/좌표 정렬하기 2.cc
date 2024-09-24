#include <bits/stdc++.h>
using namespace std;

int n, x, y;
vector<pair<int, int>> nms;

bool cmp(pair<int, int> a, pair<int, int> b) {
    if (a.second == b.second) return a.first < b.first;
    else return a.second < b.second;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        nms.push_back(make_pair(x, y));
    }

    sort(nms.begin(), nms.end(), cmp);

    for (auto i : nms) cout << i.first << " " << i.second << '\n';
}