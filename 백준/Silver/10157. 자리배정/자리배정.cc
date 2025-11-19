#include <iostream>
#include <algorithm>
using namespace std;

#define MAXN 1000

int r, c, k;
int grid[MAXN][MAXN];

int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

bool InRange(int a, int b) {
    return 0 <= a && a < r && 0 <= b && b < c;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    cin >> c >> r;
    cin >> k;

    int x = r-1, y = 0;
    int dir = 0;
    int seat = 1;
    bool chk = true;

    for (int i = 0; i < c*r; i++) {
        grid[x][y] = seat;
        if (seat == k) {
            chk = false;
            break;
        }
        int nx = x + dx[dir], ny = y + dy[dir];
        if (!InRange(nx, ny) || grid[nx][ny] > 0) {
            dir = (dir + 1) % 4;
            nx = x + dx[dir], ny = y + dy[dir];
        }
        x = nx, y = ny;
        seat++;
    }
    
    if (chk) cout << 0;
    else cout << y+1 << ' ' << r-x;

    return 0;
}