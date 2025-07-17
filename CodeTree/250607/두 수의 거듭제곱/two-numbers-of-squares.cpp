#include <iostream>
#include <cmath>
using namespace std;

int a, b;

int Power(int x, int y) {
    return pow(x, y);
}
int main() {
    cin >> a >> b;

    cout << Power(a, b);
    return 0;
}