#include <iostream>
#include <algorithm>
using namespace std;

int n;
int num[100];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }

    int ans = 0;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i+2; j < n; j++) {
            sum = num[i] + num[j];
            ans = max(ans, sum);
        }
    }

    cout << ans;

    return 0;
}