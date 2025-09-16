#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> nms;
int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        int nm;
        cin >> nm;
        nms.push_back(nm);
    }
    sort(nms.begin(), nms.end());

    for (int i : nms) cout << i << '\n';
}