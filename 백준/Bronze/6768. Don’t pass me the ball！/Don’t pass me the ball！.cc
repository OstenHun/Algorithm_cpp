#include <bits/stdc++.h>
using namespace std;

int j, ret;
int main() {
    cin >> j;

    ret = (j-1)*(j-2)*(j-3)/(3*2*1);

    cout << ret << '\n';
}