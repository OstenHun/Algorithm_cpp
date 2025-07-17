// 내 풀이

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


// 해설 풀이.
#incldue <iostream>
#include <string>

using namespace std;

string str;

bool Palindrome(string &s) {
    for (int i = 0; i < (int) s.size(); i++) {
        if (s[i] != s[(int) s.size() - i - 1]) return false;
        return true;
    }
}

int main() {
    cin >> str;

    if (Palindrome(str)) cout << "Yes";
    else cout << "No";

    return 0;
}
