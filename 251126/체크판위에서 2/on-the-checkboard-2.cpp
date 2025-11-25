#include <iostream>
using namespace std;

int r, c;
char grid[15][15];


int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    cin >> r >> c;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> grid[i][j];
        }
    }

    int cnt = 0;
    for (int i = 1; i < r-1; i++) {
        for (int j = 1; j < c-1; j++) {
            if (grid[0][0] == grid[i][j]) continue;

            for (int k = i + 1; k < r-1; k++) {
                for (int l = j + 1; l < c-1; l++) {
                    if (grid[i][j] == grid[k][l]) continue;

                    if (grid[k][l]!=grid[r-1][c-1]) cnt++;

                }
            }
        }
    }

    cout << cnt;

    return 0;
}