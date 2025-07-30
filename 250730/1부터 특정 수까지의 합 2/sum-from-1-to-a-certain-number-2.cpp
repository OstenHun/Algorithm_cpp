#include <iostream>

using namespace std;

int N;

int New(int n) {
    if (n==1) return 1;
    
    return New(n-1) + n;
}
int main() {
    cin >> N;

    cout << New(N);

    return 0;
}