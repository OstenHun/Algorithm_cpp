#include <bits/stdc++.h>
using namespace std;

unsigned long long a, b;
int main() {
    cin >> a >> b;
    if (a > b)
        swap(a, b);
    int sub = b - a;
    if (sub == 0) {
        cout << 0 << '\n';
    } else {
        cout << sub - 1 << '\n';
        for (unsigned long long i = 0; i < sub - 1; i++) {
            cout << i + a + 1 << " ";
        }
    }

    return 0;
}