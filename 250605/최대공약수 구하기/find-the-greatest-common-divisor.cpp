#include <iostream>
#include <algorithm>

using namespace std;

int gcd(int x, int y) {
    int chk = min(x, y);
    while (x%chk!=0 || y%chk!=0)
        chk--;
    return chk;
}

int n, m;

int main() {
    cin >> n >> m;

    int ans = gcd(n, m);

    cout << ans;

    return 0;
}