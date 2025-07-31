#include <iostream>

using namespace std;

int a, b, c;

int Sum(int n) {
    if (n == 0) return 0;

    return Sum(n/10) + n%10;
}

int main() {
    cin >> a >> b >> c;

    int M = a*b*c;

    cout << Sum(M);

    return 0;
}