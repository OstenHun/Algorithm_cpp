#include <iostream>
#include <string>
using namespace std;

string LR, a;

int main() {
    cin >> a;
    cin >> LR;

    int len = (int) a.size();
    for (int i = 0; i < (int) LR.size(); i++) {
        if (LR[i] == 'L') {
            a = a.substr(1, len-1) + a.substr(0, 1);
        } else if (LR[i] == 'R') {
            a = a.substr(len-1, len) + a.substr(0, len-1);
        }
    }

    cout << a;

    return 0;
}