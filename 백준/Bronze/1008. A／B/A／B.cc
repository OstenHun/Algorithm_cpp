#include <bits/stdc++.h>
using namespace std;

int a, b;
double divide;
int main() {
    cin >> a >> b;
    divide = a / (double) b;
    cout.precision(10);
    cout << divide;
    return 0;
}