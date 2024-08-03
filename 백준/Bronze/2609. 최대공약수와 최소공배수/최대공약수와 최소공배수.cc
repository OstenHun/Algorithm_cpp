#include <bits/stdc++.h>
using namespace std;

int a, b, mn, mx;
int main() {
    cin >> a >> b;
    mn = min(a, b);
    while(true) {
        if (a % mn == 0 && b % mn == 0)
            break;
        else
            mn--;
    }
    cout << mn << '\n';

    mx = max(a, b);
    while(true) {
        if (mx % a == 0 && mx % b == 0)
            break;
        else
            mx++;
    }
    cout << mx << '\n';

    return 0;
}