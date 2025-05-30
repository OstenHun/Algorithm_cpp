#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string input;
    char chk;

    cin >> input >> chk;
    int start_idx = -1;

    if (input.find(chk) != string::npos) {
        start_idx = input.find(chk);
    }

    if (start_idx == -1) cout << "No";
    else cout << start_idx;
    return 0;
}