#include <iostream>
#include <algorithm>
#include <cstdlib>
using namespace std;

int n;
int x[100], y[100];
int area;
int ans;

int GetMaxArea(int i1, int i2, int i3) {
    if (x[i1] == x[i2]) {
        if (y[i1] == y[i3]) {
            area = abs(y[i1]-y[i2]) * abs(x[i1]-x[i3]);
        } else if (y[i2] == y[i3]) {
            area = abs(y[i1]-y[i2]) * abs(x[i2]-x[i3]);
        }
    } else if (x[i1] == x[i3]) {
        if (y[i1] == y[i2]) {
            area = abs(y[i1]-y[i3]) * abs(x[i1]-x[i2]);
        } else if (y[i3] == y[i2]) {
            area = abs(y[i1]-y[i3]) * abs(x[i3]-x[i2]);
        } 
    } else if (x[i2] == x[i3]) {
        if (y[i1] == y[i2]) {
            area = abs(y[i2]-y[i3]) * abs(x[i1]-x[i2]);
        } else if (y[i3] == y[i1]) {
            area = abs(y[i2]-y[i3]) * abs(x[i3]-x[i1]);
        } 
    } 

    return area;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }

    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            for (int k = j+1; k < n; k++) {
                ans = max(GetMaxArea(i, j, k), ans);
            }
        }
    }

    cout << ans;

    return 0;
}