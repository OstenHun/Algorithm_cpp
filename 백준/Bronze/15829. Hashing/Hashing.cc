#include <bits/stdc++.h>
using namespace std;

int l;
string str;
long long ret;
int main() {
    cin >> l >> str;
    for (int i = 0; i < str.size(); i++) {
        ret += ((int)str[i]-96) * pow(31, i);
    }
    cout << ret;
    return 0;
}