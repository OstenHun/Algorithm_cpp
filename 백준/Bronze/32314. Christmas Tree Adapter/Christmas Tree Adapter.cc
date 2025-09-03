#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double a_tree;
    double w, v;
    
    cin >> a_tree >> w >> v;

    int A = w / v;

    if (a_tree <= A) cout << 1;
    else cout << 0;
    
    return 0;
}
