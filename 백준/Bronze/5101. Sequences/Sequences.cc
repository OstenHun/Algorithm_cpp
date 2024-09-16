#include <bits/stdc++.h>
using namespace std;

int a, b, c;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    while(1) {
        cin >> a >> b >> c;
        if (a==0 && b==0 && c==0)
            break;

        if ((c - a) % b == 0) {
            int n = (c - a) / b + 1;
            if (n > 0) 
                cout << n << '\n';
            else
                cout << "X" << '\n';
        } else {
            cout << "X" << '\n';
        }
    }
}