#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();
    
    int score = 1;
    int fullScore = 0;
    for(int i = 0; i < n; i++) {
        string ret;
        getline(cin, ret);
        
        for(int j = 0; j < ret.size(); j++) {
            if (ret[j] == 'O') {
                fullScore += score;
                if (ret[j + 1] == 'O')
                    score += 1;
                else if (ret[j + 1] == 'X')
                    score += 0;
            } else 
                score = 1;
        } 
        cout << fullScore << endl;
        fullScore = 0;
        score = 1;
    }
    
    return 0;
}