#include <iostream>
#include <cstdlib>
#include <algorithm>

using namespace std;

int dev[6];

int GetDiff(int i, int j, int k) {
    int sum1 = dev[i] + dev[j] + dev[k];
    int sum2 = 0;
    for (int u = 0; u < 6; u++) {
        sum2+=dev[u];
    }
    sum2-=sum1;
    return abs(sum1-sum2);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    for (int i = 0; i < 6; i++) {
        cin >> dev[i];
    }

    int min_diff = 1000000;
    for (int i = 0; i < 6; i++) {
        for (int j = i+1; j < 6; j++) {
            for (int k = j+1; k < 6; k++) {
                min_diff = min(min_diff, GetDiff(i, j, k));
            }
        }
    }

    cout << min_diff;

    return 0;
}