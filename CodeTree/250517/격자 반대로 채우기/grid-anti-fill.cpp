#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int** mat = new int* [n];
    
    for (int i = 0; i < n; i++) {
        mat[i] = new int[n];
    }
    int cnt = 1;

    bool chk = 0;
    for (int i = n-1; i >= 0; i--) {
        if (chk == 0) {
            for (int j = n-1; j>=0; j--) {
                mat[j][i] = cnt++;
                chk = 1;
            }
        } else {
            for (int j = 0; j < n; j++) {
                mat[j][i] = cnt++;
                chk = 0;
            }
        }
        
    }

    // for (int i = 0; i < n; i++) {
    //     if (i%2==0) {
    //         for (int j = n-1; j >= 0;j--) {
    //             mat[j][i] = cnt--;
    //         }
    //     } else {
    //         for (int j = 0; j < n; j++) {
    //             mat[j][i] = cnt--;
    //         }
    //     }
    // }

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