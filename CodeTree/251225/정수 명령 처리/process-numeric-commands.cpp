#include <iostream>
#include <stack>
using namespace std;

int n;
stack<int> s;
string command;
int num;
int main() {
    cin >> n;
    bool is_empty = true;

    for (int i = 0; i < n; i++) {
        cin >> command;
        if (command == "push") {
            cin >> num;
            s.push(num);
        } else if (command == "pop") {
            cout << s.top() << '\n';
            s.pop();
        } else if (command == "size") {
            cout << s.size() << '\n';
        } else if (command == "empty") {
            cout << s.empty() << '\n';
        } else if (command == "top") {
            cout << s.top() << '\n';
        }
    }

    return 0;
}