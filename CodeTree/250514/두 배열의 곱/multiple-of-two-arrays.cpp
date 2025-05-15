#include <iostream>
using namespace std;

int nm;
int main() {
    int ans[3][3] = {};

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> nm;
            ans[i][j] = nm;
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> nm;
            ans[i][j] *= nm;
            cout << ans[i][j] << ' ';
        }
        cout << '\n';
    }

    
    return 0;
}