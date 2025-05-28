#include <iostream>
#include <string>
using namespace std;

int main() {
    string ans;
    int chk;

    cin >> ans >> chk;
    
    int len = ans.length();
    if (chk > len) {
        for (int i = len-1; i >= 0; i--) {
            cout << ans[i];
        }
    } else {
        for (int i = len-1; i >= len-chk; i--) {
            cout << ans[i];
        }
    }
    return 0;
}