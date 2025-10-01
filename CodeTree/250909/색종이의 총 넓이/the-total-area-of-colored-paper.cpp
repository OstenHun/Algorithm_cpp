#include <iostream>

using namespace std;

int N;
int x[100], y[100];
int ans[201][201];
int area;

int main() {
    cin >> N;

    int offset = 100;

    for (int i = 0; i < N; i++) {
        cin >> x[i] >> y[i];
        x[i] += offset;
        y[i] += offset;
    }

    for (int i = 0; i < N; i++) {
        for (int j = x[i]; j < x[i]+8; j++) {
            for (int k = y[i]; k < y[i]+8; k++) {
                ans[j][k]++;
            }
        }
    }


    for (auto& col : ans) {
        for (auto i : col) {
            if (i >= 1) area++;
        }
    }

    cout << area;
    

    return 0;
}