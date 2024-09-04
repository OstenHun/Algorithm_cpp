#include <bits/stdc++.h>
using namespace std;

long long n, m;
int main() {
    cin >> n >> m;
    if (n-m > 0)
        cout << n-m << '\n';
    else
        cout << -(n-m) << '\n';
}