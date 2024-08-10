#include <bits/stdc++.h>
using namespace std;

int n, age, num;
string name;
int main() {
    cin >> n;
    vector<tuple<int, int, string>> inputs;
    for (int i = 0; i < n; i++) {
        cin >> age >> name;
        num++;
        inputs.emplace_back(age, num, name);
    }

    sort(inputs.begin(), inputs.end());
    for (auto i : inputs) {
        cout << get<0>(i) << " " << get<2>(i) << '\n';
    }

    return 0;
}