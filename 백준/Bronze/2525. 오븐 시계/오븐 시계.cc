#include <bits/stdc++.h>
using namespace std;

int a, b, c;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> a >> b >> c;

    int min = b + c;
    if (min >= 60) {
        a += min / 60;
        min %= 60;
        if (a>=24) {
            a %= 24;
        }
    }
    
    cout << a << " " << min << '\n';
}