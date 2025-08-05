#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int n, k;
string t;
string str[100];
vector<string> ans;

void chkT(string x) {
    for (int i = 0; i < n; i++) {
        bool chk = true;
        for (int j = 0; j < t.length(); j++) {
            if (str[i][j] != x[j]) chk = false;
        }
        if (chk)
            ans.push_back(str[i]);
    }
}

int main() {
    cin >> n >> k >> t;

    for (int i = 0; i < n; i++) {
        cin >> str[i];
    }

    chkT(t);

    sort(ans.begin(), ans.end());

    // for (auto i : ans) {
    //     cout << i << ' ';
    // }

    cout << ans[k-1];

    return 0;
}