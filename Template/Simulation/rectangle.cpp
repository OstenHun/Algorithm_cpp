#include <iostream>
#include <algorithm>
using namespace std;

const int MAXC = 201;
const int OFFSET = 100;
static int board[MAXC][MAXC];

using ll = long long;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    int N;
    cin >> N;

    for (int i = 0; i < N; ++i) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        for (int y = y1; y < y2; ++y) {
            for (int x = x1; x < x2; ++x) {
                int xx = x+OFFSET;
                int yy = y+OFFSET;

                board[yy][xx]++;
            }
        }
    }

    ll area = 0;
    ll overlap2 = 0;

    int maxRow = -1, minRow = MAXC;
    int maxCol = -1, minCol = MAXC;

    for (int y = 0; y < MAXC; ++y) {
        for (int x = 0; x < MAXC; ++x) {
            if (board[y][x]>=1) {
                maxRow = max(maxRow, y);
                minRow = min(minRow, y);
                maxCol = max(maxCol, x);
                minCol = min(minCol, x);
                
                area++;
            }

            if (board[y][x]>=2) 
                overlap2++;
        }
    }

    ll box = (maxRow - minRow + 1) * (maxCol - minCol + 1);

    cout << area << '\n';
    cout << overlap2 << '\n';
    cout << box << '\n';

    return 0;
}