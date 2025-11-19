#include <iostream>
#include <string>
using namespace std;

#define MAXN 99

int n, t;
int sum;
int dir;
string str;

int grid[MAXN][MAXN];

int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

bool InRange(int a, int b) {
    return 0 <= a && a < n && 0 <= b && b < n;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> t;
    cin >> str;

    int x = n/2;
    int y = n/2;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }

    sum += grid[x][y];
    for (int i = 0; i < t; i++) {
        if (str[i] == 'L') {
            dir = (dir-1+4)%4;
        } else if (str[i] == 'R') {
            dir = (dir + 1)%4;
        } else {
            int nx = x+dx[dir];
            int ny = y+dy[dir];
            if (!InRange(nx, ny)) continue;
            else x = nx, y = ny;
            sum+=grid[x][y];
        }
    }

    cout << sum;

    return 0;
}