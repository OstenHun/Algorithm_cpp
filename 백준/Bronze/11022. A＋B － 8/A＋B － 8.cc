#include <bits/stdc++.h>
using namespace std;

int t, a, b;
int main() {
    cin >> t;
    for (int i = 1; i <= t; i++) {
        cin >> a >> b;
        cout << "Case #" << i << ": " << a << " + " << b << " = " << a + b << '\n';
    }
    return 0;
}