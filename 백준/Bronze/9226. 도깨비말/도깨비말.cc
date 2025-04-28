#include <bits/stdc++.h>
using namespace std;

string str;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    while(1) {
        cin >> str;
        if (str == "#") break;
        string now = str;
        int cnt = 0;

        while(cnt < now.size() && now[0] != 'a' && 
                    now[0] != 'e' && now[0] != 'i' && 
                    now[0] != 'o' && now[0] != 'u') {
            
            now = now.substr(1) + now[0];
            cnt++;
        }

        cout << now;
        cout << "ay" << '\n';
    }
}