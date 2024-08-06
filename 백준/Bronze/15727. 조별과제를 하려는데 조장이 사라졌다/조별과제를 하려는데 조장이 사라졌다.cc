#include <bits/stdc++.h>
using namespace std;

int l;
int main() {
    cin >> l;
    if (l % 5 != 0)
        cout << l / 5 + 1 << '\n';
    else
        cout << l / 5 << '\n';
}