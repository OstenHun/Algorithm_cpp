#include <bits/stdc++.h>
using namespace std;

int n = 0;
int m = 0;
vector<int> inputs;

void print(vector<int> &b) {
    for (int i : b) 
        cout << i << " ";
    cout << '\n';
}

void combi(int start, vector<int> b) {
    if (b.size() == m) {
        print(b);
        return;
    }
    for (int i = start + 1; i < n; i++) {
        b.push_back(inputs[i]);
        combi(i, b);
        b.pop_back();
    }
    return;
}

int main() {
    cin >> n >> m;
    
    inputs.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> inputs[i];
    }
    sort(inputs.begin(), inputs.end());
    
    vector<int> b;
    combi(-1, b);
    
    return 0;
}