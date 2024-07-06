#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    int n;
    vector<pair<string, int>> inputs;
    
    while(cin >> str >> n) {
        inputs.push_back({str, n});
    }
    
    for (auto &input : inputs) {
        string str = input.first;
        int n = input.second;
        
        if (n < 1) {
            cout << str << " " << n << " = No permutation" << endl;
            continue;
        }
        
        vector<char> chars(str.begin(), str.end());
        sort(chars.begin(), chars.end());
        
        bool hasPermutation = true;
        for (int i = 0; i < n - 1; i++) {
            if (!next_permutation(chars.begin(), chars.end())) {
                cout << str << " " << n << " = No permutation" << endl;
                hasPermutation = false;
                break;
            }
        }
        
        if (hasPermutation) {
            string result(chars.begin(), chars.end());
            cout << str << " " << n << " = " << result << endl;
        }
    }
    
    return 0;
}