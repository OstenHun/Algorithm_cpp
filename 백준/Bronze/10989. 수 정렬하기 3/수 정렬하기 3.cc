#include <bits/stdc++.h>
using namespace std;

int n, num;
int main() {
    cin >> n;

    vector<int> cnt(10001, 0);

    for(int i = 0; i < n; i++) {
        cin >> num;
        cnt[num]++;
    }

    for (int i = 1; i <= 10000; i++) {
        for (int j = 0; j < cnt[i]; j++) {
            cout << i << '\n';
        }
    }

    return 0;
}