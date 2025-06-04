#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;
    int len = a.size();

    int cnt = 0;
    while (a != b) {
        a = a[len-1] + a.substr(0, len-1);
        cnt++;

        if (cnt==len) {
            cout << -1;
            break;
        }
    }   

    if (cnt != len)
        cout << cnt;

    return 0;
}