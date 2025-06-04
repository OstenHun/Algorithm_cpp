#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;

    int len = str.length();
    string ans = str.substr(1, len-1) + str.substr(0, 1);

    cout << ans;
    return 0;
}
