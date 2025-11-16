#include <iostream>
using namespace std;

int m, n;
int ans;
bool mat[100][100] = {0};

int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

bool InRange(int a, int b) {
    return 0 <= a && a < m && 0 <= b && b < n;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    cin >> m >> n;
    
    int d = 1;

    int x = 0, y = 0;
    mat[x][y]=1;
    for (int i = 1; i < m*n; i++) {
        int nx = x+dx[d], ny = y+dy[d];
        
        if (!InRange(nx, ny) || mat[nx][ny]==true) {
            d=(d+1)%4;
            nx = x+dx[d], ny = y+dy[d];
            ans++;
        } 

        x=nx, y=ny;
        mat[x][y]=true;
    }

    cout << ans;

    return 0;
}