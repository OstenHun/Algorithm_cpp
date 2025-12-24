#include <iostream>
#include <string>
#include <stack>
using namespace std;

string str;
stack<char> s;
int main() {
    cin >> str;

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '(') {
            s.push('(');
        } else if (str[i] == ')') {
            if (!s.empty()) {
                s.pop();
            } 
        }
    }
    if (s.empty())
        cout << "Yes";
    else
        cout << "No";

    return 0;
}