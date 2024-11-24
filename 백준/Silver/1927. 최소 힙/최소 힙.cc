#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    priority_queue<int, vector<int>, greater<int>> minHeap;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int nm;
        cin >> nm;
        if (nm > 0) {
            minHeap.push(nm);
        } else {
            if (minHeap.empty())
                cout << 0 << '\n';
            else {
                cout << minHeap.top() << '\n';
                minHeap.pop();
            }
        }
    }
}