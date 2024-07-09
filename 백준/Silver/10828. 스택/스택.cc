#include <bits/stdc++.h>
using namespace std;

int n;
string str;
int main() {
    stack<int> stack;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        string cmd;
        cin >> cmd;
        
        if(cmd == "push") {
            int value;
            cin >> value;
            stack.push(value);
        } else if(cmd == "pop") {
            if(stack.empty()) {
                cout << -1 << '\n';
            } else {
                cout << stack.top() << '\n';
                stack.pop();
            }
        } else if(cmd == "size") {
            cout << stack.size() << '\n';
        } else if(cmd == "empty") {
            if(stack.empty()) {
                cout << 1 << '\n';
            } else {
                cout << 0 << '\n';
            }
        } else if(cmd == "top") {
            if(stack.empty()) {
                cout << -1 << '\n';
            } else {
                cout << stack.top() << '\n';
            }
        }
    }
    
    return 0;
}