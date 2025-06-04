#include <iostream>
#include <string>
using namespace std;

int main() {
    string L;
    cin >> L;

    int len = L.length();

    cout << L << '\n';
    for (int i = 0; i < len; i++) {
        L = L.substr(len-1, 1) + L.substr(0, len-1);
        cout << L << '\n';
    }

    return 0;
}