#include <iostream>

using namespace std;

string A, B;

int main() {
    cin >> A;
    cin >> B;

    while (A.find(B)!=string::npos) {
        int idx = A.find(B);
        int len = B.length();
        A.erase(idx, len);
    }

    cout << A;

    return 0;
}