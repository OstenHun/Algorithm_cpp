#include <bits/stdc++.h>
using namespace std;

int n;
int main() {
    cin >> n;

    int layer = 1;
    int maxNum = 1;

    while (maxNum < n) {
        maxNum += 6*layer;
        layer++;
    }
    cout << layer;

    return 0;
}