#include <iostream>
#include <string>

using namespace std;

string text;
string pattern;

int Chk(string a, string b) {
    int size = a.size();
    for (int i = 0; i < size; i++) {
        if (a[i] == b[0]) {
            int sz = b.size();
            int cnt = 0;
            for (int j = 0; j < sz; j++) {
                if (a[i+j] == b[j]) cnt++;
            }

            if (cnt==sz) return i;
        }
    }

    return -1;
}
int main() {
    cin >> text;
    cin >> pattern;

    cout << Chk(text, pattern);

    return 0;
}