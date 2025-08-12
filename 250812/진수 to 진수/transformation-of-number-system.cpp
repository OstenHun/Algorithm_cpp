#include <iostream>
#include <string>
#include <vector>
using namespace std;

int a, b;
string n;

vector<int> digits;
int main() {
    cin >> a >> b;
    cin >> n;

    int num = 0;
    int sz = n.length();
    for (int i = 0; i < sz; i++) {
        num = num*a + (n[i]-'0');
    }

    while(1) {
        if (num < b) {
            digits.push_back(num);
            break;
        }

        digits.push_back(num%b);
        num /= b;
    }

    for (int i = digits.size() - 1; i >= 0; i--) {
        cout << digits[i];
    }
    
    return 0;
}