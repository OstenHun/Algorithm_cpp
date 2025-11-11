#include <iostream>
#include <string>
using namespace std;

string str;

int status = 0;
int dx[4] = {0, 1, 0, -1}, dy[4] = {1, 0, -1, 0};

int x, y;
int cnt;

void Move(char a) {
    if (a == 'L') 
        status = (status+3)%4;
    else if (a == 'R') 
        status = (status+1)%4;
    else if (a == 'F') {
        x+=dx[status];
        y+=dy[status];
    }
}

int main() {
    cin >> str;

    for (int i = 0; i < str.length(); i++) {
        Move(str[i]);
        cnt++;
        if (x==0 && y==0) break;
    }

    if (x==0&&y==0) cout << cnt;
    else cout << -1;
}