#include <bits/stdc++.h>
using namespace std;

int n, num;
int main() {
    cin >> n;
    long long sum = 0;
    vector<vector<int>> inputs(n, vector<int>(n));
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> num;
            inputs[i][j] = num;
            sum += num;
        }
    }
    cout << sum;
}