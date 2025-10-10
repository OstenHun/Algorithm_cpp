#include <iostream>
#include <algorithm>
using namespace std;

int n;
int arr[1001];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int ans = 0, cnt = 0;
    for (int i = 0; i < n; i++) { 
        if (i>=1 && arr[i-1] < arr[i]) cnt++;
        else cnt = 1;

        ans = max(ans, cnt);
    }

    cout << ans << '\n';

    return 0;
}