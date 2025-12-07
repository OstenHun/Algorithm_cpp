#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int n, h, t;
int temp;
vector<int> diffs;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> h >> t;

    int minimum_diff = 200;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        diffs.push_back(abs(h-temp));
    }

    sort(diffs.begin(), diffs.end());

    int ans = 0;
    for (int i = 0; i < t; i++) {
        ans+=diffs[i];
    }
    
    cout << ans;

    return 0;
}