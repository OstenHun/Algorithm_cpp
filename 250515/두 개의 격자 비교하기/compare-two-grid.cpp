#include <iostream>
using namespace std;

int n, m, nm;
int main() {
    cin >> n >> m;

    int** ans = new int* [n];

    for (int j = 0; j < n; j++) {
        ans[j] = new int[m];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> ans[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> nm;
            if (nm != ans[i][j])
                cout << 1 << ' ';
            else cout << 0 << ' ';
        }
        cout << '\n';
    }

    for (int j = 0; j < m; j++) {
        delete[] ans[j];
    }

    delete[] ans;
    return 0;
}