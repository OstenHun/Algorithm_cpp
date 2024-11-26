#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int x;
    cin >> x;

    int n;
    cin >> n;

    int sum = 0;
    for (int i = 0; i < n; i++) {
        int price, num;
        cin >> price >> num;
        sum += price*num;
    }

    if (x == sum) cout << "Yes";
    else cout << "No";
}