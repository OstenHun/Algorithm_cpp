#include <iostream>
using namespace std;

int n, m;
int d = 2;

int mat[100][100];

int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

bool InRange(int a, int b) {
    return 0 <= a && a < n && 0 <= b && b < m;
}


int main() {
    cin >> n >> m;

    int x = 0, y = 0;
    mat[x][y] = 1;

    for (int i = 2; i <= n*m; i++) {
        int nx = x + dx[d], ny = y + dy[d];

        if (!InRange(nx, ny) || mat[nx][ny]>0) {
            d = (d-1+4) % 4;
            nx = x + dx[d], ny = y + dy[d];
        }

        x = nx, y = ny;

        mat[x][y] = i;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << mat[i][j] << ' ';
        }
        cout << '\n';
    }

    return 0;
}