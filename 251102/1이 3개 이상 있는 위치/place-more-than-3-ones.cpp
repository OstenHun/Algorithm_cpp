#include <iostream>
#include <vector>
using namespace std;

int n;

int dx[4] = {0, 1, 0, -1}, dy[4] = {1, 0, -1, 0};

bool IsRange(int x, int y, int nn) {
    return (0 <= x && x < nn && 0 <= y && y < nn);
}

bool IsMoreThree(int x, int y, vector<vector<int>> &arr, int nn) {
    int cnt = 0;
    for (int dir = 0; dir < 4; dir++) {
        int nx = x + dx[dir], ny = y + dy[dir];
        if (IsRange(nx, ny, nn) && arr[nx][ny] == 1) cnt++;
    }

    if (cnt >= 3) return true;
    else return false;
}

int main() {
    cin >> n;

    vector<vector<int>> matrix;

    for (int i = 0; i < n; i++) {
        vector<int> x;
        for (int j = 0; j < n; j++) {
            int k;
            cin >> k;
            x.push_back(k);
        }

        matrix.push_back(x);
    }


    int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (IsMoreThree(i, j, matrix, n)) 
                ans++;
        }
    }

    cout << ans;

    return 0;
}