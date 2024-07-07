#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> value;
    
    string s;
    cin >> s;
    for (int i = 0; i < 26; i++) 
        value.push_back(-1);
    
    for(int j = 0; j < s.size(); j++) {
        if(value[(int)s[j] - 97] == -1)
            value[(int) s[j] - 97] = j;
    }
    
    for(int i = 0; i < 26; i++) 
        cout << value[i] << " ";
}