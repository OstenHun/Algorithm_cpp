#include <bits/stdc++.h>
using namespace std;

int l;
string str;
long long ret, R = 1;
int M = 1234567891;
int main() {
    cin >> l >> str;
    
    // 50점 받은 풀이.
    // for (int i = 0; i < str.size(); i++) {
    //     ret += ((str[i]-96) * pow(31, i));
    // }

    // mod 연산 방법
    // (A * B) % C = (A % C * B % C) % C
    for (int i = 0; i < str.size(); i++) {
        ret += ((str[i] - 96) * R) % M;
        ret %= M;
        R = (R * 31) % M;   
    }
        
    cout << ret;
    return 0;
}
