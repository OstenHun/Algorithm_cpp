#include <bits/stdc++.h>
using namespace std;

string n;
int main() {
    while(true) {
        cin >> n;
        if (n == "0")
            break;
        bool ck = true;
        for(int i = 0; i < n.size() / 2; i++) {
            if (n[i] != n[n.size()-(i+1)])
                ck = false;
        }
        if (ck)
            cout << "yes" << '\n';
        else    
            cout << "no" << '\n';
    }
    
    return 0;
}