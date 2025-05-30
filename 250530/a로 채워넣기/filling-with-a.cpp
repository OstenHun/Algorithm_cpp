#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;

    int len = str.length();

    str[1] = 'a';
    str[len - 2] = 'a';

    cout << str;
    return 0;
}