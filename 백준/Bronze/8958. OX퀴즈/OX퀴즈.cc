#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();

    int score = 1;
    int fullScore = 0;
    for (int i = 0; i < n; i++) {
        string ret;
        getline(cin, ret);

        for (int j = 0; j < ret.size(); j++) {
            if (ret[j] == 'O') {
                fullScore += score;
                // cout << "score: " << score << endl;
                if (ret[j+1] == 'O') 
                    score += 1;
                    // cout << score << endl;
                else if (ret[j+1] == 'X') 
                    score += 0;
                    // cout << score << endl;
            } else 
                score = 1;
                // cout << score << endl;
            // cout << "fullScore: " <<  fullScore << endl;
        }
        cout << fullScore << endl;
        fullScore = 0;
        score = 1;
    }
    
    return 0;
    
}


// 더 효율 적인 풀이
#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore(); // 개행 문자를 무시합니다.

    for (int i = 0; i < n; i++) {
        string ret;
        getline(cin, ret);

        int score = 0;
        int fullScore = 0;

        for (int j = 0; j < ret.size(); j++) {
            if (ret[j] == 'O') {
                score++;
                fullScore += score;
            } else {
                score = 0;
            }
        }

        cout << fullScore << endl;
    }

    return 0;
}
