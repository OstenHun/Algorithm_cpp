#include <iostream>

using namespace std;

int a, b;

void Calc(int &x, int &y) {
    if (x < y) {
        x+=10;
        y*=2;
    }

    else {
        x*=2;
        y+=10;
    }

    cout << x << " " << y;
}

int main() {
    cin >> a >> b;

    Calc(a, b);

    return 0;
}