#include <bits/stdc++.h>
using namespace std;

int m, n, ret = 64;
char c;
vector<vector<char>> v;
int main() {
    cin >> n >> m;
    
    char board1[8][8] = {
        {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
        {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
        {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
        {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
        {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
        {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
        {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
        {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'}
    };

    char board2[8][8] = {
        {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
        {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
        {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
        {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
        {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
        {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
        {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
        {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'}
    };

    // 이차 배열에 입력받은 보드판 넣기.
    for (int i = 0; i < n; i++) {
        vector<char> tmp;
        for (int j = 0; j < m; j++) {
            cin >> c;
            tmp.push_back(c);
        }
        v.push_back(tmp);
    }

    for (int i = 0; i < n - 7; i++) {
        for (int j = 0; j < m - 7; j++) {
            int change = 0, change1 = 0, change2 = 0;
            for (int p = 0; p < 8; p++) {
                for (int q = 0; q < 8; q++) {
                    if (v[p+i][q+j] != board1[p][q]) change1++;
                    if (v[p+i][q+j] != board2[p][q]) change2++;
                }
                change = min(change1, change2);
            }
            if (change < ret)
                ret = change;
        }
    }

    cout << ret << '\n';
    return 0;
}