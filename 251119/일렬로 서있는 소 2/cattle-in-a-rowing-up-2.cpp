#include <iostream>

using namespace std;

int n;
int A[100];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    int cnt = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
                if (A[i] <= A[j] && A[j] <= A[k]) cnt++;
            }
        }
    }

    cout << cnt;

    return 0;
}