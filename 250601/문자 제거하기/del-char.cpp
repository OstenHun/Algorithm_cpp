#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string input;

    cin >> input;

    while (input.length() !=1) {
        int n;
        int len = input.length();

        cin >> n;

        if (n >= len) {
            input.erase(len-1, 1);
        } else {
            input.erase(n, 1);
        }
        cout << input << '\n';
    }
    return 0;
}