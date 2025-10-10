#include <iostream>
#include <algorithm>
using namespace std;

int n, t;
int arr[1001];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    cin >> n >> t;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int ans = 0, cnt = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > t) cnt++;
        else cnt = 0;

        ans = max(ans, cnt);
    }

    cout << ans << '\n';
    return 0;
}