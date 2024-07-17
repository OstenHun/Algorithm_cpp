#include <bits/stdc++.h>
using namespace std;

int n1, n2, n12;
double N;
int main() {
    cin >> n1 >> n2 >> n12;

    N = floor((n1 + 1) * (n2 + 1) / (n12 + 1) - 1);

    cout << N;
}