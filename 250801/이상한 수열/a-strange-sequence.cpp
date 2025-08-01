#include <iostream>

using namespace std;

int N;

int Num(int n) {
    if (n == 1) {
        return 1;
    }

    if (n==2) {
        return 2;
    }

    return Num(n-1) + n/3;
}

int main() {
    cin >> N;

    cout << Num(N);

    return 0;
}