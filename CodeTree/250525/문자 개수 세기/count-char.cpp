#include <iostream> 
#include <string>
using namespace std;

int main(){
    string str;
    getline(cin, str);
    
    int cnt = 0;
    char ans;
    cin >> ans;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ans) cnt++;
        else continue;
    }

    cout <<  cnt; 
    return 0;
}