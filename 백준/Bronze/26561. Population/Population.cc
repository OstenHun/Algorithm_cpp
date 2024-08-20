#include <bits/stdc++.h>
using namespace std;

int l, p, t;
int dead, born;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> l;
    
    for (int i = 0; i < l; i++) {
        cin >> p >> t;
        dead = t / 7;
        born = t / 4;
        p -= dead;
        p += born;
        cout << p << '\n';
    }
}
