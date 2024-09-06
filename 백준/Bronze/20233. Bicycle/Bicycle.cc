#include <bits/stdc++.h>
using namespace std;

int a, x, b, y, t;
int m1, m2;
int main() {
    cin >> a >> x >> b >> y >> t;

    if (t < 30) {
        m1 = a;
        m2 = b;
    }
    else if (30 <= t && t < 45) {
        m1 = a + (t-30)*x*21;
        m2 = b;
    }
        
    else {
        m1 = a + (t-30)*x*21;
        m2 = b + (t-45)*y*21;
    }
        
        
    cout << m1 << " " << m2 << '\n';
}