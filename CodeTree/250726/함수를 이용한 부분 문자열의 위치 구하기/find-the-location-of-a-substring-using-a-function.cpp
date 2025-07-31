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

#include <iostream>
#include <string>
using namespace std;

string text, pattern;

bool IsSubStr(int start_idx) {
    int n = (int) text.size();
    int m = (int) pattern.size();

    if (start_idx + m - 1 >= n) return false;

    for (int j = 0; j < m; j++) {
        if (text[start_idx + j] != pattern[j])
            return false;
    }

    return true;
}

int FindIndex() {
    int n = (int) text.size();
    for (int i = 0; i < n; i++) {
        if (IsSubStr(i))
            return i;
    }

    return -1;
}

int main() {
    cin >> text;
    cin >> pattern;

    cout << FindIndex();
    return 0;
}

// 더 효율적인 풀이.
#include <iostream>
#include <string>
using namespace std;

int main() {
    string text, pattern;
    cin >> text >> pattern;

    size_t found_pos = text.find(pattern);

    if (found_pos != string::npos) {
        cout << found_pos << '\n';
    } else {
        cout << -1 << '\n';
    }

    return 0;
}

// KMP 알고리즘
#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> getPi(const string& pattern) {
    int m = pattern.size();
    vector<int> pi(m, 0);

    int j = 0; 
    for (int i = 1; i < m; i++) {
        while (j > 0 && pattern[i] != pattern[j]) {
            j = pi[j - 1];
        }

        if (pattern[i] == pattern[j]) {
            pi[i] = ++j;
        }
    }

    return pi;
}

int kmp(const string& text, const string& pattern) {
    int n = text.size();
    int m = pattern.size();
    vector<int> pi = getPi(pattern);

    int j = 0; 
    for (int i = 0; i < n; i++) {
        while (j > 0 && text[i] != pattern[j]) {
            j = pi[j-1];
        }

        if (text[i] == pattern[j]) {
            if (j == m - 1) {
                return i - m + 1;
            } else {
                j++;
            }
        }
    }

    return -1;
}

int main() {
    string text, pattern;
    cin >> text >> pattern;

    cout << kmp(text, pattern) << '\n';

    return 0;
}
