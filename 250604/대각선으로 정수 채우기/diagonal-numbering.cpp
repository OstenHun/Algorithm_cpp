#include <iostream>

using namespace std;

int n, m;

int main() {
    cin >> n >> m;

    int mat[101][101];

    int x = 0;
    int y = 0;
    int cnt = 1;
    mat[x][y] = 1;
    for (int i = 1; i <= n+m-2; i++) {
        if (y < m-1) y++;
        else x++;

        int x_i = x;
        int y_i = y;
        while ( 0 <= x_i && x_i <= n-1 && 
                0 <= y_i && y_i <= m-1 &&
                x_i+y_i == i) {
            cnt++;
            mat[x_i][y_i] = cnt;
            x_i++;
            y_i--;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << mat[i][j] << ' ';
        }
        cout << '\n';
    }

    return 0;
}