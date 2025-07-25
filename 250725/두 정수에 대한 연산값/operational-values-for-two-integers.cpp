#include <iostream>

using namespace std;

int a, b;

void SpecialCalc(int &x, int &y) {
    if (x >= y) {
        x+=25;
        y*=2;
    } 
    else {
        y+=25;
        x*=2;
    }

    cout << x << " " << y;
}

int main() {
    cin >> a >> b;

    SpecialCalc(a, b);

    return 0;
}