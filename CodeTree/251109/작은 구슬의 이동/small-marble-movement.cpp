#include <iostream>
using namespace std;

int n, t;
int r, c;
char d;

int dx[4] = {1, 0, 0, -1}, dy[4] = {0, 1, -1, 0};

int GetDir(char a) {
    if (a == 'R') return 0;
    else if (a == 'D') return 1;
    else if (a == 'U') return 2;
    else if (a == 'L') return 3;
}

bool InRange(int x, int y) {
    return (0 <= x && x < n && 0 <= y && y < n);
}

int main() {
    cin >> n >> t;
    cin >> r >> c >> d;

    int move_dir = GetDir(d);
    int x = r-1, y = c-1;

    for (int i = 0; i < t; i++) {
        int nx = x + dy[move_dir], ny = y + dx[move_dir];
        
        if (!InRange(nx, ny))
            move_dir = 3 - move_dir;
        else 
            x += dy[move_dir], y += dx[move_dir];
    }

    cout << x+1 << " " << y+1;

    return 0;
}