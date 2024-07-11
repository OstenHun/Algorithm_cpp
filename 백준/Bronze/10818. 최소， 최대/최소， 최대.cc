#include <bits/stdc++.h>
using namespace std;

int n, num;
int main() {
    cin >> n;
    vector<int> inputs;
    for(int i = 0; i < n; i++) {
        cin >> num;
        inputs.push_back(num);
    }
    cout << *min_element(inputs.begin(), inputs.end()) << " " << *max_element(inputs.begin(), inputs.end());
}