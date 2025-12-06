#include <iostream>
#include <algorithm>
#include <cmath>
#include <climits>

using namespace std;

int n, h, t;
int arr[100];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    cin >> n >> h >> t;

    for (int i = 0;i < n; i++) {
        cin >> arr[i];
    }

    int ans = INT_MAX;
    for (int i = 0; i < n-t; i++) {
        int sum = 0;
        for (int j = i; j < i+t; j++) {
            sum+=abs(h-arr[j]);
        }
        ans = min(ans, sum);
    }

    cout << ans;

    return 0;
}