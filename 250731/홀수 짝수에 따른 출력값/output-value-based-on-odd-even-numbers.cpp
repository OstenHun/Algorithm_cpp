#include <iostream>

using namespace std;

int N;

int ON(int n) {
    if (n==1) return 1;
    if (n==2) return 2;

    return ON(n-2) + n;
}

int main() {
    cin >> N;

    cout << ON(N);

    return 0;
}