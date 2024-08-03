#include <bits/stdc++.h>
using namespace std;

int n, num;
vector<int> inputs;
int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num;
        inputs.push_back(num);
    }
    sort(inputs.begin(), inputs.end());
    
    for(int i : inputs) {
        cout << i << '\n';
    }
}