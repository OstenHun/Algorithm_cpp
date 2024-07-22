#include <bits/stdc++.h>
using namespace std;

int t, n, m, cnt, num;
int main() {
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n >> m;
        vector<int> values;

        for (int j = 0; j < n; j++) {
            cin >> num;
            values.push_back(num);
        }
        
        cnt = 0;
        int index = m;

        while(true) {
            auto max_it = max_element(values.begin(), values.end());

            if (values[0] != *max_it) {
                values.push_back(values[0]);
                values.erase(values.begin());
                
                if (index == 0)
                    index = values.size() - 1;
                else
                    index--;
                
            } else {
                values.erase(values.begin());
                ++cnt;
                if (index == 0)
                    break;
                index--;
            }
        }

        cout << cnt << '\n';
    }
}