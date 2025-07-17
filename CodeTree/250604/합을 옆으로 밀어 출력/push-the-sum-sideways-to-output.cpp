#include <iostream>
#include <string>
using namespace std;

int sum;
int main() {
    int n;
    cin >> n;

    int x;
    for (int i = 0; i < n; i++) {
        cin >> x;
        sum += x;
    }

    string ans = to_string(sum);
    int len = ans.size();
    ans = ans.substr(1, len-1) + ans[0];

    cout << ans;
    return 0;
}