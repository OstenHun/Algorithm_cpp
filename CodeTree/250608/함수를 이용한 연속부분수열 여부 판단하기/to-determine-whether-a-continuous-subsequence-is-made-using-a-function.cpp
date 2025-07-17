#include <iostream>

using namespace std;

int n1, n2;
void chk(string x, string y) {

    if (x.find(y) != string::npos) cout << "Yes";
    else cout << "No"; 
}

int main() {
    cin >> n1 >> n2;
    string a_ = "";
    string b_ = "";

    for (int i = 0; i < n1; i++) {
        char c;
        cin >> c;
        a_ += c;
    }


    for (int i = 0; i < n2; i++) {
        char c2;
        cin >> c2;
        b_ += c2;
    }

    chk(a_, b_);

    return 0;
}