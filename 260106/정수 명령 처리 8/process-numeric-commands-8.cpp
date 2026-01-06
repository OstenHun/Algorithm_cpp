#include <iostream>
#include <list>
using namespace std;

int n;
string command;

int main() {
    list<int> myList;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> command;
        if (command == "push_front") {
            int a;
            cin >> a;
            myList.push_front(a);
        } else if (command == "push_back") {
            int a;
            cin >> a;
            myList.push_back(a);
        } else if (command == "pop_front") {
            int popnum = myList.front();
            myList.pop_front();
            cout << popnum << '\n';
        } else if (command == "pop_back") {
            int popnum = myList.back();
            myList.pop_back();
            cout << popnum << '\n';
        } else if (command == "size") {
            int size = myList.size();
            cout << size << '\n';
        } else if (command == "empty") {
            cout << myList.empty() << '\n';
        } else if (command == "front") {
            cout << myList.front() << '\n';
        } else if (command == "back") {
            cout << myList.back() << '\n';
        }
    }

    return 0;
}