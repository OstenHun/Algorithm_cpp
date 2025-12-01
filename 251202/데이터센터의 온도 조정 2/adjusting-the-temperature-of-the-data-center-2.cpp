#include <iostream>
#include <algorithm>
using namespace std;

int n, c, g, h;
int ta[1000], tb[1000];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    cin >> n >> c >> g >> h;

    for (int i = 0; i < n; i++) {
        cin >> ta[i] >> tb[i];
    }

    int mx = 0;
    for (int i = 0; i < n; i++) {
        if (mx < tb[i]) mx = tb[i];
    }

    int ans = 0;
    for (int i = 0; i <= mx; i++) {
        int sum = 0;
        for (int j = 0; j < n; j++) {
            if (i < ta[j]) sum+=c;
            else if (ta[j] <= i && i <= tb[j]) sum+=g;
            else if (tb[j] < i) sum+=h;
        }
        ans = max(ans, sum);
    }

    cout << ans;

    return 0;
}