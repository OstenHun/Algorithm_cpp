#include <iostream>
#include <vector>
using namespace std;

const int MAXN = 250;

int n, k, p, t;
int x[MAXN];
int y[MAXN];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> k >> p >> t;
    vector<bool> ans(n);
    vector<int> cnt(n);

    cnt[p - 1] = k;
    ans[p - 1] = 1;

    for (int i = 0; i < t; i++) {
        int tt = 0, xx = 0, yy = 0;
        cin >> tt >> xx >> yy;
        x[tt - 1] = xx;
        y[tt - 1] = yy;
    }

    for (int i = 0; i < MAXN; i++) {
        int curr_x = x[i]-1;
        int curr_y = y[i]-1;
        if (cnt[curr_x] > 0 && cnt[curr_y] > 0) {
            cnt[curr_x]--;
            cnt[curr_y]--;
        }
        else if (cnt[curr_x] > 0) {
            cnt[curr_x]--;
            cnt[curr_y] = k;
            ans[curr_y] = 1;
        }
        else if (cnt[curr_y] > 0) {
            cnt[curr_y]--;
            cnt[curr_x] = k;
            ans[curr_y] = 1;
        }
    }

    for (auto i : ans) {
        if (i) cout << 1;
        else cout << 0;
    }
}