#include <bits/stdc++.h>
using namespace std;

int n, m, num;
unordered_map<int, int> inputs;
vector<int> outputs;
int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num;
        inputs[num]++;
    }

    cin >> m;
    outputs.resize(m);
    for (int i = 0; i < m; i++) {
        cin >> num;
        outputs[i] = inputs[num];
    }

    for (auto i : outputs)
        cout << i << " ";

    return 0;
}