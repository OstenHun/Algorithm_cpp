#include <iostream>
#include <vector>

using namespace std;

int N;
int x1[10], y1[10];
int x2[10], y2[10];
int sum;

int ans[101][101] = {};
int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        int min = 0;
        cin >> x1[i] >> y1[i] >> x2[i] >> y2[i];

        if (x1[i] < min) min = x1[i];
        else if (y1[i] < min) min = y1[i];
        else if (x2[i] < min) min = x2[i];
        else if (y2[i] < min) min = y2[i];

        x1[i]+=min;
        y1[i]+=min;
        x2[i]+=min;
        y2[i]+=min;
    }

    for (int i = 0; i < N; i++) {

        for (int j = x1[i]; j < x2[i]; j++) {
            for (int k = y1[i]; k < y2[i]; k++) {
                ans[j][k]=1;
            }
        }
    }

    for (int i = 0; i <= 100; i++) {
        for (int j = 0; j <= 100; j++) {
            if (ans[i][j] == 1) {
                sum++;
            }
        }
    }

    cout << sum;    

    return 0;
}