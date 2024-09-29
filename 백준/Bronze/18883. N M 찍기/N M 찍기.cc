#include <bits/stdc++.h>
using namespace std;

int n, m;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 1; j < m; j++) {
            cout << j+m*i << " ";
        }
        cout << m+m*i<< '\n';
    }
}