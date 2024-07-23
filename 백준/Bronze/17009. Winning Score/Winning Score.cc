#include <bits/stdc++.h>
using namespace std;

int app3, app2, app1, bana1, bana2, bana3;
int app, bana;
int main() {
    cin >> app3 >> app2 >> app1 >> bana3 >> bana2 >> bana1;
    app = 3*app3 + 2*app2 + app1;
    bana = 3*bana3 + 2*bana2 + bana1;

    if (app > bana)
        cout << 'A';
    else if (app < bana) 
        cout << 'B';
    else
        cout << 'T';
}