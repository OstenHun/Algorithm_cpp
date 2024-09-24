#include <bits/stdc++.h>
using namespace std;

int n;
string str;
vector<string> st;

bool cmp(string a, string b) {
    if (a.size() == b.size()) return a < b;
    else return a.size() < b.size();
}
int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> str;
        st.push_back(str);
    }

    sort(st.begin(), st.end(), cmp);

    for (int i = 0; i < n; i++) {
        if (i+1 < n && st[i] == st[i+1]) continue;
        else cout << st[i] << '\n';
    }
}
