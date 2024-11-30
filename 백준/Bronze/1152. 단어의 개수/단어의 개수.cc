#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string str;
    getline(cin, str);

    bool inw = false;

    int cnt = 0;
    for(char c : str) {
        if (c!=' ') {
            if (!inw) {
                cnt++;
                inw = true;
            } 
        } else {
                inw = false;
        }
    }

    cout << cnt;
}