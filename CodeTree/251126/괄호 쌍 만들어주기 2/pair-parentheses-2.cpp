#include <iostream>
#include <string>
using namespace std;

string a;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    cin >> a;

    int sz = a.length();

    int cnt = 0;
    for (int i = 1; i < sz; i++) {
        for (int j = i+1; j < sz; j++) {
            if (a[i-1]=='(' && a[i]=='(') {
                if (a[j-1]==')'&& a[j]==')') cnt++;
            } else continue;
        }
    }

    cout << cnt;

    return 0;
}