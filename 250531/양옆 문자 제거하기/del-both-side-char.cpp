#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    cin >> input;

    int len = input.length();
    input.erase(2, 1);
    input.erase(len-3, 1);

    cout << input;
    return 0;
}