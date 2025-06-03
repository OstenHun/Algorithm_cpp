#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {

    string str;
    cin >> str;

    int len = str.size();
    for (int i = 0; i < len; i++) {
        if(isalpha(str[i])) 
            cout << (char) toupper(str[i]);

    }
    
    return 0;
}