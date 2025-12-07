#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

#define MAXN 1000
int n;
int x[100], y[100];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }

    int ans = pow(MAXN, 4);
    for (int i = 0; i < n; i++) {
        int dist = 0;
        for (int j = i+1; j < n; j++) {
            dist = pow((x[i]-x[j]), 2) + pow((y[i]-y[j]), 2); 
            ans = min(dist, ans);
        }
    }

    cout << ans;

    return 0;
}