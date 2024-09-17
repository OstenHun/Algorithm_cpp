#include <bits/stdc++.h>
using namespace std;

int n;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<string> dir;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string in;
        cin >> in;
        dir.push_back(in);
    }

    string pattern = dir[0];

    for (int i = 1; i < n; i++) {
        for (int j = 0; j < pattern.size(); j++) {
            if (pattern[j] != dir[i][j]) {
                pattern[j] = '?';
            }
        }
    }

    cout << pattern << '\n';

    return 0;
}