#include <iostream>
using namespace std;

int main() {
    int ans[5][5];

    for (int i = 0; i < 5; i++) {
        ans[0][i] = 1;
        ans[i][0] = 1;
    }
    
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            ans[i+1][j+1] = ans[i][j+1] + ans[i+1][j];
        }
    } 

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << ans[i][j] << ' ';
        }
        cout << '\n';
    }
    return 0;
}