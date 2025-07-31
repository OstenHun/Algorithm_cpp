#include <iostream>

using namespace std;

int N;

int Fact(int n) {
    if (n == 0)
        return 1;
    
    return Fact(n-1) * n;
}
int main() {
    cin >> N;

    cout << Fact(N);

    return 0;
}