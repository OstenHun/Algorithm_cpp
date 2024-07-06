#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<pair<int, int>> inputs;
    int a, b;
    while(cin >> a >> b) {
        inputs.push_back({a, b});
    }
    
    for (auto &input : inputs) {
        a = input.first;
        b = input.second;
        
        cout << a + b << endl;
    }
    
    return 0;
}