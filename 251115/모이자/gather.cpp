#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <climits>

using namespace std;

int n;
int A[100];
int ans = INT_MAX;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < n; i++) {
        int sum_diff = 0;

        for (int j = 0; j < n; j++) {
            sum_diff += A[j]*abs((j-i));
        }
        ans = min(sum_diff, ans);
    }

    cout << ans;
    return 0;
}