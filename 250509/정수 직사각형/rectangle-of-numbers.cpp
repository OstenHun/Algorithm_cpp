#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int** matrix = new int* [n];


    for (int j = 0; j < n; j++) {
        matrix[j] = new int[m];
    }
    
    int nm = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            matrix[i][j] = nm;
            cout << matrix[i][j] << ' ';
            nm++;
        }
        cout << '\n';
    }

    for (int j = 0; j < n; j++) {
        delete[] matrix[j];
    }

    delete[] matrix;
    return 0;
}