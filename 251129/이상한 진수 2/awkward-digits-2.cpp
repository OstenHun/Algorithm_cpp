#include <iostream>
#include <string>
#include <cmath>
using namespace std;

string a;
int ans;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    cin >> a;

    int size_a = a.length();

    bool chk = 1;
    for (int i = 0; i < size_a; i++) {
        if (a[i]=='0') {
            a[i] = '1';
            chk = 0;
            break;  
        } 
    }

    if (chk) a[size_a-1] = '0';

    for (int i = 0; i < size_a; i++) {
        if (a[i]=='1') {
            ans+=pow(2, size_a-(i+1));
        } 
    }   

    cout << ans;

    return 0;
}