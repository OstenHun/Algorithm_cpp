#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    
    string str;
    cin >> str;

    int len = str.size();
    for (int i = 0; i < len; i++) {
        
        if(isdigit(str[i])) {
            cout << str[i];
        } 
        
        else if (isalpha(str[i]))  {
            cout << (char) tolower(str[i]);
        }
    }
    return 0;
}