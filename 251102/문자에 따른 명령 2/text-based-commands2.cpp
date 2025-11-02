#include <iostream>
#include <string>

using namespace std;

string N;
int main() {
    cin >> N;
    int dir = 3;
    int x = 0, y = 0;
    int dx[4] = {1, 0, -1, 0}, dy[4] = {0, -1, 0, 1};

    for (int i = 0; i < N.length(); i++) {
        if (N[i] == 'R') {
            dir = (dir+1)%4;

        } else if (N[i] == 'L') {
            dir = (dir-1)%4;

        } else {
            x+=dx[dir], y+=dy[dir];
            
        }
    }

    cout << x << " " << y;
    return 0;
}