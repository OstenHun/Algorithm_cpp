#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    
    string str_a = to_string(a);
    string str_b = to_string(b);
    string str_ab = str_a + str_b;
    int int_ab = stoi(str_ab);
    
    cout << a + b - c << endl;
    cout << int_ab - c << endl;
    return 0;
}