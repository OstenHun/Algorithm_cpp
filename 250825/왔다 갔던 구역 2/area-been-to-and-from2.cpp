#include <iostream>
#include <vector>
using namespace std;

int n;
int x[100];
char dir[100];
vector<int> ans(1000);

int main() {
    cin >> n;
    int idx = 0;
    int val = 0;
    int min = 0;

    for (int i = 0; i < n; i++) {
        cin >> x[i] >> dir[i];
    }

    for (int i = 0; i < n; i++) {
        if (dir[i] == 'R') {
            val += x[i];
        }

        else if (dir[i] == 'L') {
            val -= x[i];
        }

        if (val < min) min = val;
    }

    idx+=(-min);

    for (int i = 0; i < n; i++) {
        if (dir[i] == 'R') {
            for (int j = idx; j < idx + x[i]; j++) {
                ans[j]++;
            }
            idx+=x[i];
        }

        else if (dir[i] == 'L') {
            for (int j = idx-1; j >= idx - x[i]; j--) {
                ans[j]++;
            }
            idx-=x[i];
        }
    }

    int cnt = 0;

    for (auto i : ans) if (i >= 2) cnt++;

    cout << cnt; 
    return 0;
}