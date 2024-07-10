#include <bits/stdc++.h>
using namespace std;

vector<int> inputs;
int mx, indx;
int n;
int main() {
    for (int i = 0; i < 9; i++) {
        cin >> n;
        inputs.push_back(n);
        if (mx < n) {
            mx = n;
            indx = i;
        }
    }
    cout << mx << '\n';
    cout << indx + 1 << '\n';
    return 0;
}