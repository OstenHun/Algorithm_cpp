#include <bits/stdc++.h>
using namespace std;

int a, b, v;
int day;
int main() {
    cin >> a >> b >> v;
    if ((v - a) % (a - b) != 0)
        day = (v - a) / (a - b) + 2;
    else
        day = (v - a) / (a - b) + 1;

    cout << day;
}