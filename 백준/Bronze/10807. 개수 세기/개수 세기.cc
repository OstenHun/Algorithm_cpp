#include <bits/stdc++.h>
using namespace std;

int n, cnt, v, nm;
vector<int> nms;
int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> nm;
        nms.push_back(nm);
    }

    cin >> v;

    for (auto i : nms) {
        if (i == v)
            cnt++;
    }

    cout << cnt << '\n';
}