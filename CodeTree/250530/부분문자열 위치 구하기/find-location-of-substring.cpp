#include <iostream>
#include <string>

using namespace std;

string input_str;
string target_str;

int main() {
    cin >> input_str;
    cin >> target_str;

    int start_idx = -1;

    if (input_str.find(target_str) != string::npos)
        start_idx = input_str.find(target_str);
    
    cout << start_idx;
    return 0;
}
