#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;

    int len = a.length();

    int cnt = 0;
    for (int i = 0; i < len - 1; i++) {
        if (a[i] == b[0] && a[i+1] == b[1])
            cnt++;
    }

    cout << cnt;
    return 0;
}