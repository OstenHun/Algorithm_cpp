#include <bits/stdc++.h>
using namespace std;

string str;
int lcnt, rcnt;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> str;

    size_t it = str.find('(');

    lcnt = count(str.begin(), str.begin() + it, '@');
    rcnt = count(str.begin() + it, str.end(), '@');
    cout << lcnt << " " << rcnt << '\n';


}