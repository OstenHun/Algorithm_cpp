#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    string A;

    cin >> n >> A;

    int cnt = 0;
    for (int i = 0; i < n; i++) {
        string chk;
        cin >> chk;

        if (A==chk) cnt++;
    }

    cout << cnt;
    return 0;
}