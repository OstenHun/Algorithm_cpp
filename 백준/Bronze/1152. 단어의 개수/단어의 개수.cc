#include <bits/stdc++.h>
using namespace std;

vector<string> split(string input, string delimiter) {
    vector<string> ret;
    long long pos = 0;
    string token = "";
    while((pos = input.find(delimiter)) != string::npos) {
        token = input.substr(0, pos);
        ret.push_back(token);
        input.erase(0, pos + delimiter.length());
    }
    ret.push_back(input);
    return ret;
}

int main() {
    string s;
    int count = 0;
    getline(cin, s);
    vector<string> a = split(s, " ");
    for(string b : a) {
        if (b != "") {
            count++;
        }
    }
    cout << count;
}


// c++ 에서 spilt()을 구현하는 방법 학습
// 양 끝에 띄어쓰기 들어가는 경우 생각 못하고 틀렸음. 문제 잘 읽고 풀기.

// chat-gpt의 풀이 참고
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main() {
    string input;
    
    // 입력을 받습니다.
    getline(cin, input);
    
    // 문자열 스트림을 생성합니다.
    istringstream iss(input);
    string word;
    int count = 0;
    
    // 문자열 스트림에서 단어를 하나씩 추출하여 개수를 셉니다.
    while (iss >> word) {
        ++count;
    }
    
    // 단어의 개수를 출력합니다.
    cout << count << endl;
    
    return 0;
}

// >> 문자열 스트림을 활용해 풀 수 있다.
// 내 풀이는 문자열을 여러 번 수정하고 벡터에 저장하는 과정이 있다. 이는 다소 비효율적일 수 있음.
// istringstream 을 사용해 스트림에서 단어를 직접 추출해 더 효율적인 코드이다.
