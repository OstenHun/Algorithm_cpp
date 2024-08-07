#include <bits/stdc++.h>
using namespace std;

int n, k, all = 1, choose = 1;

int factorial(int num) {
    if (num <= 1) return 1;
    return num * factorial(num-1);
}

int main() {
    cin >> n >> k;
    all = factorial(n);

    choose = factorial(k) * factorial(n-k);

    cout << all / choose <<'\n';
    return 0;
}