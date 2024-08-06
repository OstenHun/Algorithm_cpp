#include <bits/stdc++.h>
using namespace std;

double a1, p1, r1, p2;
double pi = M_PI;
int main() {
    cin >> a1 >> p1;
    cin >> r1 >> p2;

    if (a1 / p1 > r1*r1*pi / p2)
        cout << "Slice of pizza" << '\n';
    else 
        cout << "Whole pizza" <<'\n';
}