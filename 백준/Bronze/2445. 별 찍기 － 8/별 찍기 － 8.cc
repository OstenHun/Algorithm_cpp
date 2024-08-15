#include <bits/stdc++.h>
using namespace std;

int n;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = n-i; j <= n; j++) cout << "*";
        for (int j = 1; j < n - i; j++) cout << " ";
        for (int j = 1; j < n - i; j++) cout << " ";
        for (int j = n-i; j <= n; j++) cout << "*";
        cout << '\n';
    }
    for (int i = 0; i < n-1; i++) {
        for (int j = 1; j < n-i; j++) cout << "*";
        for (int j = n-i; j <= n; j++) cout << " ";
        for (int j = n-i; j <= n; j++) cout << " ";
        for (int j = 1; j < n-i; j++) cout << "*";
        cout << '\n';
    }
}