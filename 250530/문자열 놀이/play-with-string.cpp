#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void replaceAll(string &str, const string& from, const string &to) {
    if (from.empty()) return;
    size_t start_pos = 0;
    while((start_pos = str.find(from, start_pos)) != string::npos) {
        str.replace(start_pos, from.length(), to);
        start_pos += to.length();
    }
}

int main() {
    string input;
    int n;
    cin >> input >> n;

    int q;
    string x, y;
    for (int i = 0; i < n; i++) {
        cin >> q >> x >> y;
        
        if (q == 1) {
            int x_ = stoi(x);
            int y_ = stoi(y);
            char chk = input[x_-1];
            input[x_-1] = input[y_-1];
            input[y_-1] = chk;
            cout << input << '\n';
        }
        
        else {
            replaceAll(input, x, y);
            cout << input << '\n';
        }
    }
    return 0;
}