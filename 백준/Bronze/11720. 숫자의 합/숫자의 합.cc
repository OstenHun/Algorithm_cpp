#include <bits/stdc++.h>
using namespace std;

int n, sum;
string num;
int main() {
    cin >> n >> num;

    for (int i = 0; i < n; i++) {
        sum += num[i] - '0';
    }
    cout << sum;
}