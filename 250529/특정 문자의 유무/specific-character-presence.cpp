#include <iostream>
#include <string>
using namespace std;

int main() {
    string ans;
    cin >> ans;
    int len = ans.length();
    bool chk1 = false;
    bool chk2 = false;

    for (int i = 0; i < len-1; i++) {
        if (ans.substr(i, 2) == "ee") 
            chk1 = true;
        if (ans.substr(i, 2) == "ab")
            chk2 = true;
    }

    string x = "";
    string y = "";
    if (chk1) x = "Yes";
    else x = "No";
    if (chk2) y = "Yes";
    else y = "No";

    cout << x << ' ' << y ;
    return 0;
}