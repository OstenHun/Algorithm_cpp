#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n;
int x1[100], x2[100];

vector<int> ans;
int main() {
    cin >> n;
    int nm = 100;
    vector<int> ans(200);

    for (int i = 0; i < n; i++) {
        cin >> x1[i] >> x2[i];
        if (x1[i] < nm)
            nm = x1[i];
    }

    for (int i = 0; i < n; i++) {
        x1[i]+=-nm;
        x2[i]+=-nm;
    }

    for (int i = 0; i < n; i++) {
        for (int j = x1[i]; j < x2[i]; j++) {
            ans[j]++;
        }
    }

    int mx = *max_element(ans.begin(), ans.end());

    cout << mx;    

    return 0;
}