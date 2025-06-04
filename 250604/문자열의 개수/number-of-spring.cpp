#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    int cnt = 0;
    string ans = "";
    string str;

    while (true) {
        cin >> str;

        if (str=="0") {
            cout << cnt << '\n';
            for (char ch : ans) {
                if (isalpha(ch)) cout << ch;
                else if (isdigit(ch)) cout << '\n';
            }
            break;
        }

        else {
            if (cnt % 2 == 0) {
                ans += (str + '1');
            }
            cnt++;
        }
    }

    return 0;
}