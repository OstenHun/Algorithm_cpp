#include <bits/stdc++.h>
using namespace std;

int a, b;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> a >> b;
    cout << a*(b%10) << '\n';
    cout << a*(b%100/10) << '\n';
    cout << a*(b/100) << '\n';
    cout << a*(b%10) + a*(b%100/10)*10 + a*(b/100)*100 << '\n';
}