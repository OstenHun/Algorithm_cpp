#include <iostream>
#include <string>
using namespace std;

int main() {
    string strList[4];

    for (int i = 0; i < 4; i++) {
        cin >> strList[i];
    }

    for (int i = 3; i >= 0; i--) {
        cout << strList[i] << '\n';
    }
    return 0;
}