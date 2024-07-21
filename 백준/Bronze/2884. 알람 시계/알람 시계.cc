#include <bits/stdc++.h>
using namespace std;

int h, m;
int main() {
    cin >> h >> m;
    if (m >= 45) {
        m -= 45;
    } else {
        if (h == 0) {
            h = 23;
            m = 60 + m - 45;
        } else {
            h -= 1;
            m = 60 + m - 45;
        }
            
    }
    cout << h << " " << m;

    return 0;
}