#include <iostream>

using namespace std;

int N;

int Recursion(int n) {
    if (n == 0) return 0;

    return Recursion(n/10) + (n%10)*(n%10);
}

int main() {
    cin >> N;

    cout << Recursion(N);

    return 0;
}