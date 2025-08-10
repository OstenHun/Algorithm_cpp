#include <iostream>
#include <string>
using namespace std;

string binary;

int main() {
    cin >> binary;
    int num = 0;

    for (int i = 0; i < binary.size(); i++) 
        num = num * 2 + (binary[i]-'0');

    cout << num;
    return 0;
}