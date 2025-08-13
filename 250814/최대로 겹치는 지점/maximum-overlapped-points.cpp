#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n;
int x1[100], x2[100];

int main() {
    cin >> n;
    vector<int> ans(100);

    for (int i = 0; i < n; i++) {
        cin >> x1[i] >> x2[i];
    }

    for (int i = 0; i < n; i++) {
        for (int j = x1[i]; j <= x2[i]; j++) {
            ans[j]++;
        }
    }

    int mx = *max_element(ans.begin(), ans.end());

    cout << mx;  

    return 0;
}