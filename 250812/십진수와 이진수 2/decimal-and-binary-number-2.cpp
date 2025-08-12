#include <iostream>
#include <cmath>
#include <vector>
#include <string>
using namespace std;

string N;
vector<int> digits;

int main() {
    cin >> N;

    int num = 0;
    int sz = N.length();
    for (int i = 0; i < sz; i++) {
        num = num*2 + (N[i] - '0');
    }

    num*=17;
    
    while (1) {
        if (num < 2) {
            digits.push_back(num);
            break;
        }

        digits.push_back(num % 2);
        num /= 2;
    }

    for (int i = digits.size() - 1; i >= 0; i--) {
        cout << digits[i];
    }

    return 0;
}