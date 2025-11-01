#include <iostream>
#include <map>

using namespace std;

int n;
char dir[100];
int dist[100];

int main() {
    cin >> n;
    int x = 0, y = 0;

    map<char, int> directionMap = {
        {'W', 0},
        {'S', 1},
        {'N', 2},
        {'E', 3}
    };

    int dx[4] = {-1, 0, 0, 1};
    int dy[4] = {0, -1, 1, 0};

    for (int i = 0; i < n; i++) {
        cin >> dir[i] >> dist[i];
        x += dx[directionMap[dir[i]]] * dist[i];
        y += dy[directionMap[dir[i]]] * dist[i];
    }

    cout << x << " " << y;


    return 0;
}