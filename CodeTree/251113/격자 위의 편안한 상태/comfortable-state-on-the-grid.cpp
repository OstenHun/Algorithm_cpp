#include <iostream>
#include <vector>
using namespace std;

int n, m;
int dx[4] = {-1, 0, 1, 0}, dy[4] = {0, 1, 0, -1};

bool InRange(int a, int b) {
    return (0 <= a && a < n && 0 <= b && b < n);
}

bool IsComfort(int a, int b, int arr[][100]) {
    int cnt = 0;
    for (int i = 0; i < 4; i++) {
        int nx = a + dx[i], ny = b + dy[i];
        if (InRange(nx, ny) && arr[nx][ny]==1)
            cnt++;
    }

    if (cnt==3) return true;
    else return false;
}

int index[100][100];
int r[10000], c[10000];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        cin >> r[i] >> c[i];
    }

    for (int i = 0; i < m; i++) {
        index[r[i]-1][c[i]-1] = 1;
        if (IsComfort(r[i]-1, c[i]-1, index)) cout << 1 << '\n';
        else cout << 0 << '\n';
    }

    return 0;
}