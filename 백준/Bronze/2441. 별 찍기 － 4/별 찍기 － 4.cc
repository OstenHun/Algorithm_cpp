#include <bits/stdc++.h>
using namespace std;

int n;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int p = n-i; p < n; p++) {
            cout << " ";
        }
        for (int j = n-i; j > 0; j--) {
            cout << "*";
        }
        cout << '\n';
    }
}