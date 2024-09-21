#include <bits/stdc++.h>
using namespace std;

long long a, b, c, ret;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> a >> b >> c;
    if (c%2==0) ret = a;
    else ret = a^b;
    cout << ret << '\n';
}