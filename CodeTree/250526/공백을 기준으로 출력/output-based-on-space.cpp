
// 1번 풀이
#include <iostream>
#include <string>
using namespace std;

void replaceAll(string &str, const string& from, const string& to) {
    if (from.empty()) return;
    size_t start_pos = 0;
    while((start_pos = str.find(from, start_pos)) != string::npos) {
        str.replace(start_pos, from.length(), to);
        start_pos += to.length();
    }
}

int main() {
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);

    replaceAll(s1, " ", "");
    replaceAll(s2, " ", "");

    s1.append(s2);

    cout << s1;
    return 0;
}

// 2번 풀이
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);

    for (int i = 0; i < s1.length(); i++) {
        if (s1[i] != ' ')
            cout << s1[i];
    }

    for (int i = 0; i < s2.length(); i++) {
        if (s2[i] != ' ')
            cout << s2[i];
    }

    return 0;
}
