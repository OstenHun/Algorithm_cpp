#include <bits/stdc++.h>
using namespace std;

int num, sum;
vector<int> heights;
int main() {
    for (int i = 0; i < 9; i++) {
        cin >> num;
        heights.push_back(num);
    }

    vector<int> dwarves;
    for (int i = 0; i < 9; i++) {
        for (int j = i+1; j < 9; j++) {
            int exclude1 = heights[j];
            int exclude2 = heights[i];
            dwarves.clear();

            sum = accumulate(
                heights.begin(), 
                heights.end(), 
                0, 
                [&dwarves, exclude1, exclude2](int accumulated, int current) {
                    if (current != exclude1 && current != exclude2) {
                        dwarves.push_back(current);
                        return accumulated + current;
                    } else 
                        return accumulated;
            }
            );

            if (sum == 100) break;
        }
        if (sum == 100) break;
    }
    sort(dwarves.begin(), dwarves.end());
    for (int i : dwarves) {
        cout << i << '\n';
    }
    return 0;
}