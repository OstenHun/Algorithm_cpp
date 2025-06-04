#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string x, y;
    cin >> x >> y;

    int len_x = x.size();
    int len_y = y.size();

    string X = "";
    string Y = "";
    for (int i = 0; i < len_x; i++) {
        if (isdigit(x[i]))
            X+=x[i];
    }

    for (int j = 0; j < len_y; j++) {
        if (isdigit(y[j]))
            Y+=y[j];
    }   

    cout << stoi(X) + stoi(Y);
    return 0;
}