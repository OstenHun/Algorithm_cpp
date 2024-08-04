#include <bits/stdc++.h>
using namespace std;

int num, prize;
int nm[4];
int main() {
    for (int i = 0; i < 3; i++) {
        cin >> num;
        nm[i] = num;
    }
    sort(nm, nm+3);

    if (nm[0] == nm[1] && nm[1] == nm[2]) {
        prize = 10000 + nm[0] * 1000;
    } 

    else if (nm[0] == nm[1] && nm[0] != nm[2]) {
        prize = 1000 + nm[0] * 100;
    } else if (nm[1] == nm[2] && nm[1] != nm[0]) {
        prize = 1000 + nm[1] * 100;
    } else if (nm[0] == nm[2] && nm[0] != nm[1]) {
        prize = 1000 + nm[0] * 100;
    } 
    
    else
        prize = nm[2] * 100;


    cout << prize <<'\n';
    return 0;
}