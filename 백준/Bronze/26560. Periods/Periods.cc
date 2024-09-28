#include <bits/stdc++.h>
using namespace std;

int n;
string str;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i++) {
        getline(cin, str);
        if (str.back() == '.')  cout << str << '\n';
        else cout << str << "." << '\n';
    }

    return 0;
}