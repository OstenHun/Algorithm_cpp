#include <iostream>
#include <algorithm>
using namespace std;

#define MAXN 40000

int n, mxx, mxy, mnx, mny;
int x[100], y[100];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }

    int ans = MAXN*MAXN;
    for (int i = 0; i < n; i++) {
        int sum = 0;
        mxx = 0;
        mxy = 0;
        mnx = MAXN;
        mny = MAXN;
        for (int j = 0; j < n; j++) {
            if (j==i) 
                continue;

            mxx = max(mxx, x[j]);
            mnx = min(mnx, x[j]);
            mxy = max(mxy, y[j]);
            mny = min(mny, y[j]);
        }
        sum = (mxx-mnx) * (mxy-mny);
        ans = min(sum, ans);
    }

    cout << ans;

    return 0;
}