#include <bits/stdc++.h>
using namespace std;

int n, x, ret;
int nms[1000001] = {};
bool occur[2000001];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for (int i = 0; i < n; i++) 
        cin >> nms[i];

    cin >> x;
    for (int i = 0; i < n; i++) {
        if (x-nms[i] > 0 && occur[x-nms[i]]) ret++;
        occur[nms[i]] = true;
    }
    cout << ret << '\n';
}