#include <iostream>

using namespace std;

int x1[3], y1[3];
int x2[3], y2[3];

int ans[2001][2001] = {};
int main() {
    int offset = 1000;
    cin >> x1[0] >> y1[0] >> x2[0] >> y2[0];
    cin >> x1[1] >> y1[1] >> x2[1] >> y2[1];
    cin >> x1[2] >> y1[2] >> x2[2] >> y2[2];

    for (int i = 0; i <= 2; i++) {
        x1[i]+=offset;
        x2[i]+=offset;
        y1[i]+=offset;
        y2[i]+=offset;
    } 

    for (int i = 0; i <= 1; i++) {
        for (int j = x1[i]; j < x2[i]; j++) {
            for (int k = y1[i]; k < y2[i]; k++) {
                ans[j][k]++;
            }
        }
    }

    for (int i = x1[2]; i < x2[2]; i++) {
        for (int j = y1[2]; j < y2[2]; j++) {
            ans[i][j]=0;
        }
    }

    int sum = 0;

    for (auto& row : ans) {
        for (auto i : row) {
            if (i==1) sum++;
        }
    }
    
    cout << sum;

    return 0;
}