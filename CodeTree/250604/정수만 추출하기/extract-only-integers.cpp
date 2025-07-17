#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string x, y;
    cin >> x >> y;

    int len_x = x.size();
    int len_y = y.size();
    for (int i = 0; i < len_x; i++) {
        if (!isdigit(x[i])) {
            x.substr(0, i);
        }
    }

    for (int j = 0; j < len_y; j++) {
        if (!isdigit(y[j])) {
            y.substr(0, j);
        }
    }

    cout << stoi(x) + stoi(y);
    return 0;
}