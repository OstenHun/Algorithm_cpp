#include <iostream>
using namespace std;

const int OFFSET = 100;
const int MAXC = 201;
int n;
int x1[10], y1[10];
int x2[10], y2[10];
int board[MAXC][MAXC];
int main() {
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> x1[i] >> y1[i] >> x2[i] >> y2[i];
        x1[i]+=OFFSET;
        y1[i]+=OFFSET;
        x2[i]+=OFFSET;
        y2[i]+=OFFSET;
    }

    for (int i = 0; i < n; ++i) {
        if (i%2==0) {
            for (int y = y1[i]; y < y2[i]; y++) {
                for (int x = x1[i]; x < x2[i]; x++) {  
                    if (board[y][x]>=1)
                        board[y][x]--;
                }
            }
        } else {
            for (int y = y1[i]; y < y2[i]; y++) {
                for (int x = x1[i]; x < x2[i]; x++) {
                    board[y][x]++;
                }
            }
        }
    }

    long long area = 0;

    for (int y = 0; y < MAXC; y++) {
        for (int x = 0; x < MAXC; x++) {
            if (board[y][x] >= 1) area++;
        }
    }

    cout << area << '\n';

    return 0;
}