#include <iostream>

using namespace std;

int N;

void Recursion(int n) {
    if (n==0) 
        return ;
    cout << n << ' ';
    Recursion(n-1);
    cout << n << ' ';
}
int main() {
    cin >> N;

    Recursion(N);

    return 0;
}