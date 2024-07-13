#include <bits/stdc++.h>
using namespace std;

int n;
int main() {
    cin >> n;
    
    for (int i = 1; i <= n; i++) {
        for (int j = n - i; j > 0; j--) {
            cout << " ";
        }
        for (int k = 0; k < i; k++) {
            cout << "*";
        }
        cout << '\n';
    }
    return 0;
}