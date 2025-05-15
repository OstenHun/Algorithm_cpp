#include <iostream>

using namespace std;

int n, m;

int main() {
    cin >> n >> m;

    // int** mat = new int* (n);

    // for (int i = 0; i < n; i++) {
    //     mat[i] = new int (m);
    // }

    for (int i = 0; i < n; i++) {
        int ev = 0;
        int od = 1;
        for (int j = 0; j < m; j++) {
            if (j%2) {
                cout << od*n*2-(i+1) << ' ';
                od++;
            }
            else {
                cout << i+ev*n*2 << ' ';
                ev++;
            }
        }
        cout << '\n';
    }

    return 0;
}
