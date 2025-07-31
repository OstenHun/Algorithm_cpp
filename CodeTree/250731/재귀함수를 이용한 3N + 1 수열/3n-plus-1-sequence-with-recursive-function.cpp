#include <iostream>

using namespace std;

int n;

int Re(int n) {
    if (n==1) return 0;

    if (n%2==0)
        return Re(n/2) + 1;

    return Re(3*n+1) + 1;
}

int main() {
    cin >> n;

    cout << Re(n);

    return 0;
}