#include <bits/stdc++.h>
using namespace std;

int t, k, n;
int main()
{
    cin >> t;
    while (t--) {
        cin >> k >> n;
        vector<vector<int>> inputs(k+1, vector<int>(n+1));
        for (int i = 1; i <= n; i++) {
            inputs[0][i] = i;
        }

        for (int i = 1; i <= k; i++) {
            for (int j = 1; j <= n; j++) {
                inputs[i][j] = inputs[i][j - 1] + inputs[i - 1][j];
            }
        }
        cout << inputs[k][n] << '\n';
    }
}