#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int** mat = new int* [n];

    for (int i = 0; i < n; i++) {
        mat[i] = new int[n];
    }

    for (int i = 0; i < n; i++) {
        mat[i][0] = 1;
        mat[0][i] = 1;
    }

    for (int i = 1; i < n; i++) {
        for (int j = 1; j < n; j++) {
            mat[i][j] = mat[i][j-1] + mat[i-1][j] + mat[i-1][j-1];
        }
    }

    for (int i = 0 ; i < n; i++) {
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