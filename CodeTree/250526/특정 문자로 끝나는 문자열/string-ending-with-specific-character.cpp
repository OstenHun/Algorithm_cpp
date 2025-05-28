#include <iostream>
#include <string>
using namespace std;

int main() {
    string mat[10];

    for (int i = 0; i < 10; i++) {
        cin >> mat[i];
    }

    char chk;
    cin >> chk;
    int cnt = 0;
    for (int j = 0; j < 10; j++) {
        if (chk == mat[j][mat[j].length()-1]) {
            cout << mat[j] << '\n';
            cnt++;
        }
    }
    if (cnt==0) cout << "None";
    return 0;
}