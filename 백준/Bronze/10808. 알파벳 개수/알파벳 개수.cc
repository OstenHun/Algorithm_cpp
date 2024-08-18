#include <bits/stdc++.h>
using namespace std;

string s;
vector<int> alpha(26,0);
int main() {
    cin >> s;
    for (auto c : s) {
        int idx = c - 97;
        alpha[idx]++;
    }

    for (int i : alpha) {
        cout << i << " ";
    }
}