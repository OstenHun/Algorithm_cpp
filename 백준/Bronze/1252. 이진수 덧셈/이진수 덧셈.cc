//bitset 이용하기, 비트 연산자 이용하는 거 더 연습하기.


#include <bits/stdc++.h>
using namespace std;

string a, b;
int main() {
    cin >> a >> b;
    
    bitset<81> A(a);
    bitset<81> B(b);

    while (B.any()) {
        bitset<81> c = A & B;
        A = A ^ B;
        B = c << 1;
    }

    string ret = A.to_string();
    ret.erase(0, ret.find_first_not_of('0'));
    if (ret.empty()) 
        ret = "0";
    
    cout << ret << '\n';
}
