#include <iostream>

using namespace std;

int x;

void PrintStar(int n) {
    for (int i = 0; i < n; i++) {
        cout << '*' << ' ';
    }
    cout << '\n';
}

void Recursion(int n) {
    if (n==0) return;

    PrintStar(n);
    Recursion(n-1);
    PrintStar(n);
}

int main() {
    cin >> x;

    Recursion(x);

    return 0;
}