#include <bits/stdc++.h>
using namespace std;

struct InputData {
    int a;
    int b;
    int x;
};

int n;
int main() {
    cin >> n;
    vector<InputData> inputs;
    int a, b, x;
    for(int i = 0; i < n; i++) {
        cin >> a >> b >> x;
        inputs.push_back({a, b, x});
    }
    
    int w;
    for(const auto& i : inputs) {
        w = i.a * (i.x - 1) + i.b;
        cout << w << '\n';
    }
}