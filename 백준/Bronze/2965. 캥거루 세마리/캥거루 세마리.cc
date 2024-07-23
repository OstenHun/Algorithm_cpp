#include <bits/stdc++.h>
using namespace std;

int a, b, c;
int le, ri;
int main() {
    cin >> a >> b >> c;
    le = b - a;
    ri = c - b;
    if (le > ri)
        cout << le - 1;
    else
        cout << ri - 1;
}