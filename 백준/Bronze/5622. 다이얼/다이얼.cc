#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int sum = 0;
    string str;
    cin >> str;

    for (int i = 0; i < str.length(); i++) {
        if (str[i]=='A'|| str[i]=='B'|| str[i]=='C') sum+=3;
        if (str[i]=='D'|| str[i]=='E'|| str[i]=='F') sum+=4;
        if (str[i]=='G'|| str[i]=='H'|| str[i]=='I') sum+=5;
        if (str[i]=='J'|| str[i]=='K'|| str[i]=='L') sum+=6;
        if (str[i]=='M'|| str[i]=='N'|| str[i]=='O') sum+=7;
        if (str[i]=='P'|| str[i]=='Q'|| str[i]=='R'|| str[i]=='S') sum+=8;
        if (str[i]=='T'|| str[i]=='U'|| str[i]=='V') sum+=9;
        if (str[i]=='W'|| str[i]=='X'|| str[i]=='Y'|| str[i]=='Z') sum+=10;
    }

    cout << sum;
}