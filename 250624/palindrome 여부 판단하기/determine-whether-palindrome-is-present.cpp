#include <iostream>
#include <string>

using namespace std;

string A;


void IsPalindrome(string &A) {
    bool chk = true;
    int size = A.length();
    for (int i = 0; i < size/2; i++) {
        if (A[i] != A[size-1-i])
            chk = false;
    }
    if (chk) cout << "Yes";
    else cout << "No";
}
int main() {
    cin >> A;

    // Please write your code here.

    IsPalindrome(A);
    return 0;
}