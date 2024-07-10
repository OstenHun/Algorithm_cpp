#include <bits/stdc++.h>
using namespace std;

int n;
int main() {
    cin >> n;
    int num = 666;
    int cnt = 0;
    
    while(true) {
        if(to_string(num).find("666") != string::npos) {
            cnt++;
        }
        if(cnt == n) {
            cout << num;
            break;
        }
        num++;
    }
    
    return 0;
}