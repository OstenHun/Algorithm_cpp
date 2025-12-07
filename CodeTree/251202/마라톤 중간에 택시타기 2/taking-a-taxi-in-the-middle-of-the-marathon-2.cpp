#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <climits>
using namespace std;

int n;
int ans = INT_MAX;
int x[100], y[100];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }

    for (int i = 1; i < n-1; i++) {
        int dist = 0;
        int current_x = x[0], current_y = y[0];
        for (int j = 0; j < n; j++) {
            if (j==i) continue;
            dist += abs(current_x - x[j]) + abs(current_y - y[j]);
            current_x = x[j];
            current_y = y[j];
        }
        ans = min(ans, dist);
    }

    cout << ans;

    return 0;
}