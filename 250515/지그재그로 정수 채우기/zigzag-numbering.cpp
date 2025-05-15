// #include <iostream>

// using namespace std;

// int n, m;

// int main() {
//     cin >> n >> m;

//     for (int i = 0; i < n; i++) {
//         int ev = 0;
//         int od = 1;
//         for (int j = 0; j < m; j++) {
//             if (j%2) {
//                 cout << od*n*2-(i+1) << ' ';
//                 od++;
//             }
//             else {
//                 cout << i+ev*n*2 << ' ';
//                 ev++;
//             }
//         }
//         cout << '\n';
//     }

//     return 0;
// }


#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int** mat = new int*[n];

    for (int i = 0; i < n; i++) {
        mat[i] = new int[m];
    }

    int cnt = 0;
    for (int col = 0; col < m; col++) {
        if (col % 2) {
            for (int row = n-1; row >= 0; row--) {
                mat[row][col] = cnt++;
            }
        } else {
            for (int row = 0; row < n; row++) {
                mat[row][col] = cnt++;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
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