#include <iostream>
#include <string>
#include <stack>
using namespace std;

string str;
stack<char> s;
int main() {
    cin >> str;
    bool chk = true;

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '(') {
            s.push('(');
            chk = false;
        } else if (str[i] == ')') {
            if (!s.empty()) {
                s.pop();
                chk = true;
            } else {
                chk = false;
            }
        }
    }
    if (chk && s.empty())
        cout << "Yes";
    else
        cout << "No";

    return 0;
}