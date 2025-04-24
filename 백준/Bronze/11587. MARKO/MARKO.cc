/*

// My code
#include <bits/stdc++.h>
using namespace std;

int n, cnt;
string num, str;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    map<char, char> phone {{'a', '2'}, {'b', '2'}, {'c', '2'}, 
                          {'d', '3'}, {'e', '3'}, {'f', '3'},
                          {'g', '4'}, {'h', '4'}, {'i', '4'},
                          {'j', '5'}, {'k', '5'}, {'l', '5'},
                          {'m', '6'}, {'n', '6'}, {'o', '6'},
                          {'p', '7'}, {'q', '7'}, {'r', '7'}, {'s', '7'},
                          {'t', '8'}, {'u', '8'}, {'v', '8'}, 
                          {'w', '9'}, {'x', '9'}, {'y', '9'}, {'z', '9'}};

    

    cin >> n;
    vector<string> input;
    vector<string> ans;
    
    for (int i = 0; i<n; i++) {
        cin >> str;
        input.push_back(str);
    }

    cin >> num;

    for (int i = 0; i < n; i++) {
        string s;
        for (char j : input[i]) {
            s += phone[j];
        }
        ans.push_back(s);
        
    }

    for (int j = 0; j < n; j++) {
        if (ans[j]==num) cnt++;
    }

    cout << cnt;

    return 0;
}
*/

// Feedback by ChatGPT.
#include <bits/stdc++.h>
using namespace std;

int cnt;
string word, target;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    const string phone = "22233344455566677778889999"; // 이렇게 Mapping 하는 거 기억해두기.

    int n;
    cin >> n;

    vector<string> words(n);
    for (int i = 0; i < n; i++) {
        cin >> words[i];
    }

    string target;
    cin >> target;

    for (const auto &w: words) {    // 읽기 전용으로 가져와서 값이 변하는걸 막을 수 있음.
        if (w.size() != target.size()) continue;    // 사이즈 먼저 체크해서 사이즈 다를 경우 바로 스킵 -> 시간 절약 가능.

        bool match = true;
        for (int j = 0; j < w.size(); j++) {
            if (phone[w[j] - 'a'] != target[j]) {
                match = false;
                break;
            }
        }
        if (match) cnt++;
    }

    cout << cnt;
}