#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1, str2, ans;

    cin >> str1 >> str2;


    ans = str1.substr(0, 2) + str2.substr(2, str2.length());

    cout << ans;
    return 0;
}