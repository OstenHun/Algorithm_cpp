#include <iostream>

using namespace std;

int a;
int c;
char o;

void Calc(int x, char y, int z) {
    if (y=='+') 
        cout << x << " + " << z << " = " << x+z;
    else if (y=='-') 
        cout << x << " - " << z << " = " << x-z;
    else if (y=='*') 
        cout << x << " * " << z << " = " << x*z;
    else if (y=='/') 
        cout << x << " / " << z << " = " << x/z;

    else cout << "False";
}

int main() {
    cin >> a >> o >> c;

    Calc(a, o, c);
    return 0;
}