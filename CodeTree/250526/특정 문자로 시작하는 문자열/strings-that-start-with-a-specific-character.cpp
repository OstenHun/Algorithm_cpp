#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cin >> n;

    string* mat = new string[n];

    for (int i = 0; i < n; i++) {
        cin >> mat[i];
    }

    char chk;
    cin >> chk;
    int cnt = 0;
    int len = 0;
    
    for (int i = 0; i < n; i++) {
        if (mat[i][0] == chk) {
            cnt++;
            len+=mat[i].length();
        }
    }

    
    cout << cnt << ' ';

    cout << fixed << setprecision(2) << (double) len/cnt;

    delete[] mat;
    return 0;
}