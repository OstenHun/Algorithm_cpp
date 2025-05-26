#include <iostream>
using namespace std;

int main() {
    int n, m;
    int r, c;

    cin >> n >> m;

    int** mat = new int* [n];
    for (int i = 0; i < n; i++) {
        mat[i] = new int[n];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            mat[i][j] = 0;
        }
    }

    for (int i = 0; i < m; i++) {
        cin >> r >> c;
        mat[r-1][c-1] = r*c;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << mat[i][j] << ' ';
        }
        cout << '\n';
    }
    for (int i = 0; i < n; i++) {
        delete[] mat[i];
    }

    delete[] mat;
    return 0;
}