#include <iostream>
using namespace std;

#define DIR_NUM 4
#define MAX_N 999

int n, num;
int x, y;
int p, q;
int move_dir, move_num;

int grid[MAX_N][MAX_N];

bool InRange(int a, int b) {
    return 0 <= a && a < n && 0 <= b && b < n;
}

void Move() {
    // 상 우 하 좌
    int dx[DIR_NUM] = {-1, 0, 1, 0};
    int dy[DIR_NUM] = {0, 1, 0, -1};

    x += dx[move_dir];
    y += dy[move_dir];
}

bool End() {
    return !InRange(x, y);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    cin >> num;

    x = n/2;
    y = n/2;
    move_dir = 0;
    move_num = 1;

    int cnt = 1;

    while(!End()) {
        for (int i = 0; i < move_num; i++) {
            grid[x][y] = cnt;
            if (cnt == num) {
                p = x+1;
                q = y+1;
            }
            cnt++;
            Move();

            if (End())
                break;
        }

        move_dir = (move_dir + 1) % 4;
        if (move_dir==0||move_dir==2) move_num++;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << grid[i][j] << ' ';
        }
        cout << '\n';
    }

    cout << p << ' ' << q;

    return 0;
}