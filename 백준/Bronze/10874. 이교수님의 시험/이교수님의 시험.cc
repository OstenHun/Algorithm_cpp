#include <bits/stdc++.h>
using namespace std;

int n, nm, chk;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    int ans[11];
    for (int i = 0; i < 10; i++) {
        ans[i] = (i % 5) + 1;
    }

    for (int i = 0; i < n; i++) {
        chk = 0;
        for (int j = 0; j < 10; j++) {
            int tp[11];
            cin >> nm;
            tp[j] = nm;
            if (tp[j] == ans[j]) chk++;
        }
        if (chk == 10)
            cout << i+1 << '\n';
    }
}