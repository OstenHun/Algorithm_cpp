#include <bits/stdc++.h>
using namespace std;

long long a, b, sum;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> a >> b;
    if (a > b) swap(a, b);
    
    sum = (a+b)*(b-a+1)/2;
    cout << sum << '\n';
}