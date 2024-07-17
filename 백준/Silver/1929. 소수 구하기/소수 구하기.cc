#include <bits/stdc++.h>
using namespace std;

void sieve(int m, int n) {
    vector<bool> isPrime(n + 1, true);
    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i * i <= n; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= n; j += i) {
                isPrime[j] = false;
            }
        }
    }

    for (int i = m; i <= n; i++) {
        if (isPrime[i]) {
            cout << i << '\n';
        }
    }
}

int m, n;
int main() {
    cin >> m >> n;
    sieve(m, n);
    return 0;
}