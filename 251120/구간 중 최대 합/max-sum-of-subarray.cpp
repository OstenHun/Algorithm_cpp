#include <iostream>
#include <algorithm>

using namespace std;

int n, k;
int num[100];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }

    int max_val = 0;
    for (int i = 0; i <= n-k; i++) {
        int sum = 0;
        for (int j = i; j < i + k; j++) {
            sum+=num[j];
        }
        max_val = max(max_val, sum);
    }

    cout << max_val;

    return 0;
}