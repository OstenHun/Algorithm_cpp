#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;

    int len = str.size();
    int sum = 0;

    for (int i = 0; i < len; i++) {
        if (isdigit(str[i])) {
            int nm = str[i] - '0';
            sum += nm;
        }
    }

    cout << sum;
    return 0;
}