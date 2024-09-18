#include <bits/stdc++.h>
using namespace std;

int a, b, c;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> a >> b >> c;

    if (a==b && b==c && c==60) cout << "Equilateral";
    else if (a+b+c == 180 && (a==b || b==c || c==a)) cout << "Isosceles";
    else if (a+b+c == 180 && a!=b && b!=a && a!=c) cout << "Scalene";
    else if (a+b+c != 180) cout << "Error";  
}