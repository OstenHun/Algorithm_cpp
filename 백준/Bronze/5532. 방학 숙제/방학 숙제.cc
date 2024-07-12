#include <bits/stdc++.h>
using namespace std;

int l, a, b, c, d;
int math, lang, mx;
int main() {
    cin >> l >> a >> b >> c >> d;
    if (b % d != 0){
        math = b / d + 1;
    } else
        math = b / d;
    
    mx = math;

    if (a % c != 0) {
        lang = a / c + 1;
    } else 
        lang = a / c;

    if (mx < lang) 
        mx = lang; 

    cout << l - mx;
}