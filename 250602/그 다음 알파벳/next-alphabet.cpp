#include <iostream>
using namespace std;

int main() {
    char i;
    cin >> i;
    (int)i++;
    
    if (i == '{') i='a';
    cout << (char)i;
    return 0;
}