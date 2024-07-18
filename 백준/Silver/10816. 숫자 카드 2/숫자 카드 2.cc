#include <bits/stdc++.h>
using namespace std;

int n, m, num;
vector<int> inputs;
vector<int> outputs;
int main() {
    cin >> n;
    inputs.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> inputs[i];
    }

    sort(inputs.begin(), inputs.end());

    cin >> m;
    outputs.resize(m);
    for (int i = 0; i < m; i++) {
        cin >> num;
        outputs[i] = upper_bound(inputs.begin(), inputs.end(), num) - lower_bound(inputs.begin(), inputs.end(), num);
    }

    for (auto i : outputs)
        cout << i << " ";

    return 0;
}