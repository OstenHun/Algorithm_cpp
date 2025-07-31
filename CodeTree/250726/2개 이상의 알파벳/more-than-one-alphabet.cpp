#include <iostream>
#include <string>

using namespace std;

string A;
bool IsMoreOneChar(string s) {
    int size = s.size();
    for (int i = 1; i < size; i++) {
        if (s[i] != s[i-1]) return true;
    }
    return false;

}

int main() {
    cin >> A;

    if (IsMoreOneChar(A)) cout << "Yes";
    else cout << "No";

    return 0;
}