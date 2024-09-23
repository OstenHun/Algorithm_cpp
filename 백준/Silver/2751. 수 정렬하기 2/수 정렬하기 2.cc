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

    for (int i = 0; i < n; i++) {
        if (i < n-1 && nms[i]==nms[i+1]) continue;
        else cout << nms[i] << '\n';
    }
}