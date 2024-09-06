#include <bits/stdc++.h>
using namespace std;

int a, x, b, y, t;
int main() {
    cin >> a >> x >> b >> y >> t;

    int m1 = a;
    int m2 = b;

    if (t > 30) {
        m1 += (t - 30) * x * 21;
    }

    if (t > 45) {
        m2 += (t - 45) * y * 21;
    }

    cout << m1 << " " << m2 << '\n';
}
