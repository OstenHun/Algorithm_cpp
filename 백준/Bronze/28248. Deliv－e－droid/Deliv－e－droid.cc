#include <bits/stdc++.h>
using namespace std;

int p, c, ret;
int main() {
    cin >> p >> c;
    
    ret = p * 50 - 10 * c;
    if (p > c) ret += 500;

    cout << ret << '\n';
}