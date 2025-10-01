#include <iostream>
#include <algorithm>
using namespace std;

const int MAXC = 2001;
const int OFFSET = 1000;
static int board[MAXC][MAXC];

using ll = long long;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    int x1, x2, y1, y2;

    cin >> x1 >> y1 >> x2 >> y2;
    for (int y = y1; y < y2; ++y) {
        for (int x = x1; x < x2; ++x) {
            int yy = y + OFFSET;
            int xx = x + OFFSET;

            board[yy][xx]++;
        }
    }

    cin >> x1 >> y1 >> x2 >> y2;
    for (int y = y1; y < y2; ++y) {
        for (int x = x1; x < x2; ++x) {
            int yy = y + OFFSET;
            int xx = x + OFFSET;

            board[yy][xx]--;
        }
    }

    int maxRow = -1, minRow = MAXC;
    int maxCol = -1, minCol = MAXC;

    for (int y = 0; y < MAXC; ++y) {
        for (int x = 0; x < MAXC; ++x) {
            if (board[y][x]>=1) {
                maxRow = max(maxRow, y);
                minRow = min(minRow, y);
                maxCol = max(maxRow, x);
                minCol = min(minCol, x);
            }
        }
    }

    ll area = (maxRow - minRow + 1) * (maxCol - minCol + 1);

    cout << area << '\n';

    return 0;
}