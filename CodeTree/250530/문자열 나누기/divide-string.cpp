#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    string ans = "";
    for (int i = 0; i < n; i++) {
        string str;
        cin >> str;
        ans += str;
    }

    for (int i = 0; i < ans.length(); i++) {
        if ((i+1)%5==0) cout << ans[i] << '\n';
        else cout << ans[i];
    }
    return 0;
}