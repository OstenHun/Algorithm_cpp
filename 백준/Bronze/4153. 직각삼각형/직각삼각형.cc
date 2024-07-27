#include <bits/stdc++.h> 
using namespace std;

int n, num;
vector<int> inputs(3);
int main() {
    while(true) {
        inputs.clear();
        for (int i = 0; i < 3; i++) {
            cin >> num;
            inputs.push_back(num);
        }
        
        sort(inputs.begin(), inputs.end());

        if (inputs[0] == 0 && inputs[1] == 0 && inputs[2] == 0)
            break;
        
        if (inputs[0] * inputs[0] + inputs[1] * inputs[1] == inputs[2] * inputs[2]) {
            cout << "right" << '\n';
        } else {
            cout << "wrong" << '\n';
        }
    }
} 