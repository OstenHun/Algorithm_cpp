#include <bits/stdc++.h>
using namespace std;

string s;
vector<int> alpha(26,0);
int main() {
    cin >> s;
    for (auto c : s) {
        int idx = c - 97;
        alpha[idx]++;
    }

    for (int i : alpha) {
        cout << i << " ";
    }
}


#include <bits/stdc++.h>
using namespace std;

int freq[26];
int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  string s;
  cin >> s;
  for(auto c : s)
    freq[c-'a']++;
  for(int i = 0; i < 26; i++)
    cout << freq[i] << ' ';
}
