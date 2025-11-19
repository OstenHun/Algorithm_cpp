#include <iostream>
#include <algorithm>
using namespace std;

int n;
int max_cnt;
int grid[20][20];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) 
            cin >> grid[i][j];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 2; j++) {
            max_cnt = max(max_cnt, grid[i][j] + grid[i][j + 1] + grid[i][j + 2]);
        }
    }

    cout << max_cnt;

    return 0;
}