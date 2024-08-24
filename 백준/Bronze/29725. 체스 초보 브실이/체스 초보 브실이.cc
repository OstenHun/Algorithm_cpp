#include <bits/stdc++.h>
using namespace std;

string chess;
int p1, p2;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    for (int i = 0; i < 8; i++) {
        cin >> chess;

        for (char i : chess) {
            if (i == 'K') 
                p1 += 0;
            else if (i == 'P')
                p1 += 1;
            else if (i == 'N')
                p1 += 3;
            else if (i == 'B')
                p1 += 3;
            else if (i == 'R')
                p1 += 5;
            else if (i == 'Q')
                p1 += 9;
            else if (i == 'k') 
                p2 += 0;
            else if (i == 'p')
                p2 += 1;
            else if (i == 'n')
                p2 += 3;
            else if (i == 'b')
                p2 += 3;
            else if (i == 'r')
                p2 += 5;
            else if (i == 'q')
                p2 += 9;
        }

    }

    cout << p1 - p2 << '\n';
}