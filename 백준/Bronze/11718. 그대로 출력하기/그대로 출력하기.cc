#include <bits/stdc++.h>
using namespace std;


int main() {
    string str;
    vector<string> v;
    while(getline(cin, str)) {
        v.push_back(str);
    }

    for(string s : v)
        cout << s << '\n';
}