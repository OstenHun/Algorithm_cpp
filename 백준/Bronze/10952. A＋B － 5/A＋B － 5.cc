#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    vector<pair<int, int>> inputs;
    
    while(cin >> a >> b) {
        if (a == 0 && b == 0) {
            break;
        } else 
            inputs.push_back({a, b});
    }
    
    for (auto &input : inputs) {
        a = input.first;
        b = input.second;
        cout << a + b << endl;
    }
    return 0;
}