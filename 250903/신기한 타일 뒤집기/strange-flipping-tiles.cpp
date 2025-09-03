#include <iostream>

using namespace std;

const int MAX_T = 100000;

int ans[MAX_T*2+1];
int n, x;
char dir;
int cnt_w, cnt_b;

int main() {
    cin >> n;

    int cur = MAX_T;

    for (int i = 0; i < n; i++) {
        cin >> x >> dir;

        if (dir == 'L') {
            while(x--) {
                ans[cur] = 1;
                if (x) cur--;
            }
        }

        else {
            while(x--) {
                ans[cur] = 2;
                if (x) cur++;
            }
        }
    }

    for (int i = 0; i < 2 * MAX_T; i++) {
        if (ans[i] == 1) cnt_w++;
        else if (ans[i] == 2) cnt_b++;
    }


    cout << cnt_w << ' ' << cnt_b;

    return 0;
}