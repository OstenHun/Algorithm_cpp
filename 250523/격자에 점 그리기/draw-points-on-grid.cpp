#include <iostream>
using namespace std;

int main() {
    int n, m;
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

    // int cnt = 1;
    // for (int i = 0; i < m; i++) {
    //     int r, c;
    //     cin >> r >> c;
    //     mat[r-1][c-1] = cnt++;
    // }

    // 이게 변수 하나를 덜 쓸 수 있는 방법이다.
    for (int i = 0; i < m; i++) {
        int r, c;
        cin >> r >> c;
        mat[r-1][c-1] = i+1;
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
