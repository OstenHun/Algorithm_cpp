#include <iostream>
#include <algorithm>
using namespace std;

int n;
int arr[100];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int cnt = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            double sum = 0;
            for (int k = i; k <= j; k++) {
                sum += arr[k];
            }
            sum/=(j-i+1);

            for (int k = i; k <= j; k++) {
                if (sum==arr[k]) {
                    cnt++;
                    break;
                }
            }
        }
    }

    cout << cnt;

    return 0;
}