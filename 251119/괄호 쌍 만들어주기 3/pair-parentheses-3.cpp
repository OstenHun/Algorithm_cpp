#include <iostream>
#include <string>

using namespace std;

string str;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    cin >> str;

    int sz = str.length();

    int cnt = 0;
    for (int i = 0; i < sz; i++) {
        for (int j = i+1; j < sz; j++) {
            if (str[i]=='(') {
                if (str[j]==')') cnt++;
            } else continue;
        }
    }

    cout << cnt;

    return 0;
}