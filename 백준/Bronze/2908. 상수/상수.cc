#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    a = a%10*100 + a%100/10*10 + a/100;
    b = b%10*100 + b%100/10*10 + b/100;

    if (a > b) cout << a;
    else cout << b;
}