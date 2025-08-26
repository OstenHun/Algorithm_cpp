#include <iostream>

using namespace std;

int N;
int x1[10], y1[10];
int x2[10], y2[10];
int sum;

int ans[201][201] = {};
int main() {
    cin >> N;
    int offset = 100;

    for (int i = 0; i < N; i++) {
        cin >> x1[i] >> y1[i] >> x2[i] >> y2[i];

        x1[i]+=offset;
        y1[i]+=offset;
        x2[i]+=offset;
        y2[i]+=offset;

        for (int j = x1[i]; j < x2[i]; j++) {
            for (int k = y1[i]; k < y2[i]; k++) {
                ans[j][k] = 1;
            }
        }
    }

    for (auto& row : ans) {
        for (auto i : row) {
            if (i==1) sum++;
        }
    }

    cout << sum;    

    return 0;
}