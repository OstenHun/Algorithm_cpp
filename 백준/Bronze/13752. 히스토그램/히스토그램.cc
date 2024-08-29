#include <bits/stdc++.h>
using namespace std;


int num, k;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> num;
    for (int i = 0; i < num; i++) {
        cin >> k;
        for (int j = 0; j < k; j++) cout << "=";
        cout << '\n';
    }
    
}