#include <bits/stdc++.h>
using namespace std;

string s;
int t, r;
int main() {
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> r >> s;
        for (int j = 0; j < s.size(); j++) {
            for (int u = 0; u < r; u++) {
                cout << s[j];
            }
        }
        cout << '\n';
    }
}