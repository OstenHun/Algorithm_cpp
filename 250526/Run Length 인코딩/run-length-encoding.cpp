#include <iostream>
#include <string>

using namespace std;

string A;

int main() {
    cin >> A;

    string ans = "";

    int cnt = 1;
    for (int i = 1; i <= A.length(); i++) {
        if (A[i-1] == A[i]) {
            cnt++;
        } else if (A[i-1] != A[i] || A[i] == '\0') {
            ans+=A[i-1];
            ans+=to_string(cnt);
            cnt = 1;
        }
    }

    cout << ans.length() << '\n';
    cout << ans;

    return 0;
}