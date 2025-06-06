/*
    to_string은 문자열 할당 비용이 높고 메모리 낭비 가능

    시간 복잡도 : to_string + 반복문 → O((b−a+1) × (log₁₀(max(b))) + α)    
*/

#include <iostream>
#include <string>
using namespace std;

int a, b;

// bool chk (int k) {
//     bool tsn = false;
//     string l = to_string(k);
//     int len = l.size();
//     for (int i = 0; i < len; i++) {
//         if (l[i] == '3' || l[i] == '6' || l[i] == '9' || k % 3 == 0) {
//             tsn = true;
//             break;
//         }    
//     }

// 코드 리팩토링
bool chk (int k) {
    if (k % 3 == 0) return true;
    string str = to_string(k);
    for (char c : str) 
        if (c=='3' || c=='6' || c=='9') return true;
    
    return false;
}

int count(int x, int y) {
    int cnt = 0;

    for (int i = x; i <= y; i++) {
        if (chk(i)) cnt++;
    }

    return cnt;
}

int main() {
    cin >> a >> b;

    cout << count(a, b);

    return 0;
}


/*
    정석 풀이.
    
    핵심 특징:

        * 자릿수 검사: n % 10으로 직접 숫자의 각 자리를 확인

        * 문자열 변환 없음 → 시간 & 공간 효율 높음

        * 간단한 로직 + 빠른 실행

    시간 복잡도:

        * 각 숫자마다 최대 log₁₀(n)번 연산 → 전체는 O((b−a+1) × log₁₀(max(b)))

*/
#include <iostream>
using namespace std;

bool Contain369(int x) {
    while (x > 0) {
        if (x%10 == 3 || x%10 == 6 || x%10 == 9) 
            return true;
        x /= 10;
    }
    return false;
}

bool Is369Number(int k) {
    // if (Contain369(k) || (k%3==0)) 
    //     return true;
    // return false;

    return Contain369(k) || (k%3 == 0);
}

int main() {
    int a, b;
    cin >> a >> b;

    int cnt = 0;
    for (int i = a; i <= b; i++) {
        if (Is369Number(i)) 
            cnt++;
    }

    cout << cnt;

    return 0;
}
