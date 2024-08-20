#include <bits/stdc++.h>
using namespace std;

int n, t, hours;
int day, ti;
int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> t;
        hours += t;
    }
    hours += (n-1)*8;

    day = hours / 24;
    ti = hours % 24;

    cout << day << " " << ti;
}