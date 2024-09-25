#include <bits/stdc++.h>
using namespace std;

int hh, mm;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> hh >> mm;

    cout << (hh-9)*60 + mm << '\n';
}