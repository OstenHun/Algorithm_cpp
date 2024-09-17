#include <bits/stdc++.h>
using namespace std;

int n;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++) {
        int alpha[26] = {0};
        bool chk = true;
        vector<char> missing;
        string in;
        getline(cin, in);
        
        transform(in.begin(), in.end(), in.begin(), ::tolower);

        for (char i : in) {
            if (isalpha(i)) {
                alpha[i-'a'] = 1;
            }
        }

        for (int j = 0; j < 26; j++) {
            if (alpha[j] == 0) {
                chk = false;
                missing.push_back(j + 'a');
            }
        }

        if (chk) cout << "pangram" << '\n';
        else {
            cout << "missing ";
            for (char j : missing)
                cout << j;
            cout << '\n';
        }
    }
}