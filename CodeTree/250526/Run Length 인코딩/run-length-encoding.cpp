// 문자열 한 칸씩 이동하며 뒤의 문자와 같을 경우, 다를 경우를 나눠서 개수 세기
#include <iostream>
#include <string>

using namespace std;

string A;

int main() {
    cin >> A;

    string ans = "";

    int cnt = 1;
    for (int i = 1; i <= A.length(); i++) {
        if (A[i-1] == A[i]) {
            cnt++;
        } else if (A[i-1] != A[i] || A[i] == '\0') {
            ans+=A[i-1];
            ans+=to_string(cnt);
            cnt = 1;
        }
    }

    cout << ans.length() << '\n';
    cout << ans;

    return 0;
}

/* 
현재 카운트 하는 문자를 변수에 저장해서 
문자열의 문자가 달라질 때 
현재의 문자를 갱신하며 개수 카운트
*/
#include <iostream>
#include <string>
using namespace std;

string A;

int main() {
    cin >> A;
    string encoded = "";

    char cur_char = A[0];
    int num_char = 1;
    for (int i = 1; i < A.length(); i++) {
        if (A[i] == cur_char) {
            num_char++;
        } else {
            encoded += cur_char;
            encoded += to_string(num_char);
            cur_char = A[i];
            num_char = 1;
        } 
    }
    
    encoded += cur_char;
    encoded += to_string(num_char);

    cout << encoded.length() << '\n' << encoded;
}
