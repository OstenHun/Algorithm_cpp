#include <bits/stdc++.h>
using namespace std;

int n, num;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> num;
        if (num % 2 == 0) {
            cout << num << " is even" << '\n';
        } else
            cout << num << " is odd" << '\n';
    }
}