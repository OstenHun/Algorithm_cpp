#include <iostream>
using namespace std;

int n;
int main() {
    cin >> n;
    int** mat  = new int*[n];
    for (int i = 0; i < n; i++) {
        mat[i] = new int[i+1];
    }

    mat[1][0] = 1;
    mat[1][1] = 1;
    
    for (int i = 0; i < n; i++) {
        mat[i][0] = 1;
    }

    for (int i = 2; i < n; i++) {
        for (int j = 1; j <= i; j++) {
            if (i == j) {
                mat[i][j] = 1;
            }
            else {
                mat[i][j] = mat[i-1][j-1] + mat[i-1][j];
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
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