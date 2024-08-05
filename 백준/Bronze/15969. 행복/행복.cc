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
    cout << *max_element(inputs.begin(), inputs.end()) - *min_element(inputs.begin(), inputs.end()) << '\n';

    return 0;
}