#include <iostream>
using namespace std;

int n;
char dir[100];
int dist[100];

int GetDir(char a) {
    if (a == 'E') return 0;
    else if (a == 'S') return 1;
    else if (a == 'W') return 2;
    else if (a == 'N') return 3;
}

int main() {
    cin >> n;

    int x = 0, y = 0;
    int time_ = 0;
    int dx[4] = {1, 0, -1, 0}, dy[4] = {0, -1, 0, 1};

    for (int i = 0; i < n; i++) {
        cin >> dir[i] >> dist[i];

        for (int j = 0; j < dist[i]; j++) {
            int nx = dx[GetDir(dir[i])], ny = dy[GetDir(dir[i])];
            x+=nx;
            y+=ny;
            time_++;
            if (x==0&&y==0) break;
        } 
        if (x==0&&y==0) break;
    }

    if (x==0&&y==0) cout << time_;
    else cout << -1;

    return 0;
}