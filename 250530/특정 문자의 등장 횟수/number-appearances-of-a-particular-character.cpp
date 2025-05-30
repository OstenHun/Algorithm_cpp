#include <iostream>
#include <string>
using namespace std;

int main() {
    string ans;
    cin >> ans;

    int len = ans.length();
    int cnt1 = 0;
    int cnt2 = 0;
    for (int i = 0; i < len - 1; i++) {
        if (ans[i] == 'e' && ans[i+1] == 'e') 
            cnt1++;
        if (ans[i] == 'e' && ans[i+1] == 'b')
            cnt2++;
    }

    cout << cnt1 << ' ' << cnt2;
    return 0;
}