#include <iostream>

using namespace std;

int y;

bool LeapYear(int x) {
    if (x % 100 == 0 && x % 400 != 0)
        return false;
    if (x % 4 != 0) 
        return false;

    return true;
}

int main() {
    cin >> y;

    if (LeapYear(y)) cout << "true";
    else cout << "false";

    return 0;
}