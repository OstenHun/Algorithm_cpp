#include <iostream>
#include <string>
using namespace std;

int main() {
    string input, ans;
    cin >> input;
    ans = "";
    int len = input.length();

    for (int i = 0; i < len; i++) {
        if (input[i] == input[1])
            ans += input[0];
        else ans += input[i];
    }

    cout << ans;
    return 0;
}