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
    double len = 0;
    
    for (int i = 0; i < n; i++) {
        size_t pos = mat[i].find(chk);
        if (pos != string::npos) {
            cnt++;
            len+=mat[i].length();
        }
    }
    cout << cnt << ' ';

    cout << fixed << setprecision(2) << len/cnt;
    return 0;
}