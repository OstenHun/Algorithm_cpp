#include <bits/stdc++.h>
using namespace std;

int r, c;
int main() {
    cin >> r >> c;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << "*";
        }
        cout << '\n';
    }
}