#include <bits/stdc++.h>
using namespace std;

long long fact_rec(int n) {
    if(n == 1 || n == 0) return 1;
    return n * fact_rec(n - 1);
}

int n = 0;
int main() {
    cin >> n;
    cout << fact_rec(n);
}