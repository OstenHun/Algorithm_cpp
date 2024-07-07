// 내 풀이
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> value;

    string s;
    cin >> s;
    
    for (int i = 0; i < 26; i++) 
        value.push_back(-1);


    for(int j = 0; j < s.size(); j++) {
        if (value[(int)s[j] - 97] == -1)
            value[(int)s[j] - 97] = j;
    }

    for (int i = 0; i < 26; i++) 
        cout << value[i] << " ";
}

// 더 깔끔한 풀이
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string word;
    cin >> word;

    // 알파벳 소문자의 등장 위치를 저장할 벡터를 -1로 초기화
    vector<int> positions(26, -1); >> 벡터 한꺼번에 저장 이렇게 할 수 있음.

    // 단어를 순회하면서 각 알파벳의 첫 등장 위치를 기록
    for (int i = 0; i < word.size(); ++i) {
        int index = word[i] - 'a'; // 알파벳 소문자의 인덱스 계산
        if (positions[index] == -1) { // 처음 등장한 경우에만 기록
            positions[index] = i;
        }
    }

    // 결과 출력
    for (int i = 0; i < 26; ++i) {
        cout << positions[i] << " ";
    }
    cout << endl;

    return 0;
}
