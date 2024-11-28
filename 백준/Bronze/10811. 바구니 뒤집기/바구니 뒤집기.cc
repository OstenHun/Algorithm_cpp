#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> v;

    for (int i = 1; i <= n; i++) {
        v.push_back(i);
    }

    for (int i = 0; i < m; i++) {
        int p, q;
        cin >> p >> q;

        for (int j = 0; j <(q-p+2)/2; j++) 
            swap(v[p-1+j], v[q-1-j]);
    
    }

    for (int i : v) cout << i << " ";


}