#include <iostream>
#include <string>
using namespace std;

int n;
string str;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    cin >> n;
    cin >> str;

    int sz = str.size();

    int cnt = 0;
    for (int i = 0; i < sz; i++) {
        for (int j = i+1; j < sz; j++) {
            for (int k = j+1; k < sz; k++) {
                if (str[i]=='C') {
                    if (str[j]=='O') {
                        if (str[k]=='W') cnt++;
                    }
                }
            }
        }
    }

    cout << cnt;

    return 0;
}