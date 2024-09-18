#include <bits/stdc++.h>
using namespace std;

double s1, s2;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> s1 >> s2;

    if (s1/s2 >= 0.5) cout << 'E';
    else cout << 'H';
}