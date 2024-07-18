#include <bits/stdc++.h>
using namespace std;

int n, x, num;
vector<int> a;
int main() {
    cin >> n >> x;
    for (int i = 0; i < n; i++) {
        cin >> num;
        a.push_back(num);
    }
    for (auto i : a) {
        if (i < x) 
            cout << i << " ";
    }
}