#include <bits/stdc++.h>
using namespace std;

int b;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> b;

    int c = 5*b-400;
    cout << c << '\n';

    if (b > c) cout << '1';
    else if (b == c) cout << '0';
    else cout << "-1";
}