#include <iostream>
using namespace std;

#define MAXN 100

int n;
int mat[MAXN][MAXN];
int dx[4]={-1, 0, 1, 0}, dy[4]={0, 1, 0, -1};

bool InRange(int a, int b) {
    return 0 <= a && a < n && 0 <= b && b < n;
}

bool CheckLeft(int a, int b, int d) {
    d = (d-1+4)%4;
    int nx = a + dx[d], ny = b + dy[d];
    if (InRange(nx, ny) && mat[nx][ny]==0) return true; // 왼쪽이 비어있는 지 확인
    else return false; // 왼쪽이 범위 밖이거나 비어있지 않음.
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cin >> n;

    int x = (n-1)/2, y = (n-1)/2;
    mat[x][y] = 1;
    int d = 1;
    x+=dx[d], y+=dy[d];
    mat[x][y] = 2;

    for (int i = 3; i <= n*n; i++) {
        if (CheckLeft(x, y, d)) 
            d = (d-1+4) % 4;
        
        x+=dx[d], y+=dy[d];
        
        mat[x][y] = i;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << mat[i][j] << ' ';
        }
        cout << '\n';
    }

    return 0;
}