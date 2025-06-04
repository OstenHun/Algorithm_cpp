#include <iostream>
#include <string>
using namespace std;

int main() {
    string n;
    cin >> n;

    int len = n.size();

    int sum = 0;
    for (int i = 0; i < len; i++) {
        sum += n[i] - '0';
    }

    cout << sum;
    return 0;
}