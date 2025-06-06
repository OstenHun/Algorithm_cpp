#include <iostream>
#include <string>
using namespace std;

int a, b;

bool chk (int k) {
    bool tsn = false;
    string l = to_string(k);
    int len = l.size();
    for (int i = 0; i < len; i++) {
        if (l[i] == '3' || l[i] == '6' || l[i] == '9' || k % 3 == 0) {
            tsn = true;
            break;
        }    
    }

    return tsn;
}

int count(int x, int y) {
    int cnt = 0;

    for (int i = x; i <= y; i++) {
        if (chk(i)) cnt++;
    }

    return cnt;
}

int main() {
    cin >> a >> b;

    cout << count(a, b);

    return 0;
}