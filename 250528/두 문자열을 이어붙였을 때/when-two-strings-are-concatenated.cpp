#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b;

    cin >> a >> b;

    string A = a+b;
    string B = b+a;
    if (A == B) cout << "true";
    else cout << "false";
    return 0;
}