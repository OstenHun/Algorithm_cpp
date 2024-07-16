#include <bits/stdc++.h>
using namespace std;

int t, m, n, num1, num2;
int main() {
    cin >> t;
    for (int i = 0; i < t; i++) {
        vector<int> note1;
        vector<int> note2;
        bool check = false;
        cin >> n;
        for(int i = 0; i < n; i++) {
            cin >> num1;
            note1.push_back(num1);  
        }

        cin >> m;
        for (int i = 0; i < m; i++) {
            cin >> num2;
            note2.push_back(num2);
        }
        sort(note1.begin(), note1.end());

        for (int i = 0; i < m; i++) {
            auto it = lower_bound(note1.begin(), note1.end(), note2[i]);

            if (it != note1.end() && *it == note2[i]) {
                check = true;
            } else 
                check = false;
            cout << check << '\n';
        }
    }
}