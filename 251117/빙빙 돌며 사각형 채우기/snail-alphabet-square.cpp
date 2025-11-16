#include <iostream>

using namespace std;

int n, m;
int d = 1;

char mat[100][100];
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

bool InRange(int a, int b) {
    return 0 <= a && a < n && 0 <= b && b < m;
}

int main() {    
    cin >> n >> m;

    int x = 0, y = 0;
    mat[x][y] = 'A';
    for (int i = 66; i < 65 + n*m; i++) {
        int nx = x + dx[d], ny = y + dy[d];
        
        if (!InRange(nx, ny) || (int) mat[nx][ny] > 0) {
            d = (d+1)%4;
            nx = x + dx[d], ny = y + dy[d];
        }
        x = nx, y = ny;
        mat[x][y] = (char)i;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << mat[i][j] << ' ';
        }
        cout << '\n';
    }

    return 0;
}