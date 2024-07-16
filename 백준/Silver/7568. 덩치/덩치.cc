#include <bits/stdc++.h>
using namespace std;

int n, x, y, cnt;
vector<pair<int, int>> inputs;
int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        inputs.push_back({x, y});
    }
    
    for (int i = 0; i < n; i++) {
        cnt = 0;
        for (int j = 0; j < n; j++) {
            if (inputs[i].first < inputs[j].first && inputs[i].second < inputs[j].second)
                cnt++;
        }
        cout << cnt + 1 << " ";
    }
    return 0;
}