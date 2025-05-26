#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin >> n;

    string* mat = new string[n];

    int cnt = 0;
    int chk = 0;
    for (int i = 0; i < n; i++) {
        cin >> mat[i];
        cnt+=mat[i].length();
        if (mat[i][0] == 'a') chk++;
    }



    cout << cnt << ' ' << chk;
    delete[] mat;
    return 0;
}