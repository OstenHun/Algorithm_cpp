#include <iostream>
using namespace std;

int sub;
int main() {
    char a, b;
    cin >> a >> b;

    int ascii_a = (int) a;
    int ascii_b = (int) b;

    if (ascii_a > b) sub = ascii_a - ascii_b;
    else sub = ascii_b - ascii_a;

    cout << ascii_a + ascii_b << ' ' << sub;
    return 0;
}