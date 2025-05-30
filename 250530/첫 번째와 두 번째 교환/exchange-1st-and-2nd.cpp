#include <iostream>
#include <string>
using namespace std;

int main() {
    string origin;
    string ans = "";
    cin >> origin;
    int len = origin.length();

    for (int i = 0; i < len; i++) {
        if (origin[i] == origin[0])
            ans += origin[1];
        else if (origin[i] == origin[1])
            ans += origin[0];
        else 
            ans += origin[i];
    }

    cout << ans;
    return 0;
}