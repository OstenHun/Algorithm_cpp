#include <iostream>
using namespace std;

int n, m;
int r, c, d;

int mat[50][50];
int dx[4] = { -1, 0, 1, 0 }, dy[4] = { 0, 1, 0, -1 };

bool InRange(int a, int b) {
    return 0 <= a && a < n && 0 <= b && b < m;
}

bool CheckArea(int a, int b) {
    int cnt = 0;
    for (int i = 0; i < 4; i++) {
        int nx = a + dx[i], ny = b + dy[i];
        if (mat[nx][ny] == 0) cnt++;
    }
    if (cnt > 0) return true;
    else return false;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    int ans = 0;

    cin >> n >> m;
    cin >> r >> c >> d;

    int x = r, y = c;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> mat[i][j];
        }
    }

    while (InRange(x, y) && mat[x][y]!=1) {

        if (mat[x][y] == 0) {
            mat[x][y] = 2;
            ans++;
        }

        if (CheckArea(x, y)) {
            d = (d - 1 + 4) % 4;
            int nx = x + dx[d], ny = y + dy[d];
            if (mat[nx][ny] == 0) x = nx, y = ny;
        }
        else {
            int md;
            if (d == 0) md = 2;
            else if (d == 1) md = 3;
            else if (d == 2) md = 0;
            else if (d == 3) md = 1;
            int nx = x + dx[md], ny = y + dy[md];
            x = nx, y = ny;
        }
    }

    cout << ans;

    return 0;

}