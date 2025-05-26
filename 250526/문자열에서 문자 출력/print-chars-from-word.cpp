#include <iostream>
#include <string>
using namespace std;

int main() {
    string ans;

    cin >> ans;

    for (int i = 0; ans[i]!='\0'; i++) {
        cout << ans[i] << '\n';
    }
    return 0;
}