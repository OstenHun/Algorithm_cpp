#include <iostream>
using namespace std;

int n, k;
char map[1000][1000];
int ans;

int dx_R[4] = { 0, 1, 0, -1 }, dy_R[4] = { -1, 0, 1, 0 };
int dx_L[4] = { 0, -1, 0, 1 }, dy_L[4] = { 1, 0, -1, 0 };

void ChangeDir_R(int* dir) {
    if (*dir == 0) *dir = 3;
    else if (*dir == 3) *dir = 0;
    else if (*dir == 1) *dir = 2;
    else if (*dir == 2) *dir = 1;
}

void ChangeDir_L(int* dir) {
    if (*dir == 0) *dir = 1;
    else if (*dir == 1) *dir = 0;
    else if (*dir == 2) *dir = 3;
    else if (*dir == 3) *dir = 2;
}

void OutputToInput(int* dir) {
    if (*dir == 0) *dir = 2;
    else if (*dir == 1) *dir = 3;
    else if (*dir == 2) *dir = 0;
    else if (*dir == 3) *dir = 1;
}

bool InRange(int a, int b) {
    return (0 <= a && a < n && 0 <= b && b < n);
}

void Move(int* a, int* b, int* dir) {
    if (map[*a][*b] == '/') {
        int nx = *a + dx_R[*dir], ny = *b + dy_R[*dir];
        *a = nx, * b = ny;
        ChangeDir_R(dir);
        OutputToInput(dir);
        ans++;
    }

    else if (map[*a][*b] == '\\') {
        int nx = *a + dx_L[*dir], ny = *b + dy_L[*dir];
        *a = nx, * b = ny;
        ChangeDir_L(dir);
        OutputToInput(dir);
        ans++;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> map[i][j];
        }
    }
    cin >> k;

    int x = 0, y = 0;
    for (int i = 1; i < k; i++) {
        int chk = (i - 1) / n;
        int dx[4] = { 0, 1, 0, -1 }, dy[4] = { 1, 0, -1, 0 };
        x += dx[chk], y += dy[chk];
    }

    int dir = (k - 1) / n;

    while (InRange(x, y)) {
        Move(&x, &y, &dir);
    }

    cout << ans;
}