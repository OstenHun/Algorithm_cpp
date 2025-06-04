
// 내 풀이
/*
    0이 입력 되기 전까지 입력을 받고 홀수 번 째로 입력된 문자의 경우 그 문자 에 1을 붙인 문자열을 ans 라는 문자열에 붙여서 ans를 구성했다.
    0이 입력 된다면 구성된 ans를 한 문자씩 돌며 숫자가 아닌 문자인 경우 출력을 하고 숫자일 경우 줄바꿈을 하는 식으로 알고리즘을 구현했다.
    이차원 배열을 이용하여 문자열을 저장해야 한다고 생각해. 이는 공간 복잡도 측면에서 불리할 거라 생각하고 이렇게 구현했으나.
    c++에서는 string[] 으로 배열을 설정할 수 있었기에. 아래의 풀이가 최악의 경우를 생각했을 때 더 효율적인 풀이이다.

    -> ans += (str + '1');  에서 string 의 메모리 재할당을 하며 시간이 늘어날 수 있다.
    문자열을 다루기 위해서 동적 메모리 관리를 사용해 버퍼를 할당해주며 이용되는데, ans의 크기가 현재 버퍼 용량을 초과하면, 
    새 버퍼를 할당한다 -> 기존 문자열 복사 -> 새 문자열을 이어 붙인다.
    --> 이 과정에서 복사 비용이 발생하고 이게 누적되면 O(n^2) 에 가까워질 수 있다.

    reserve()를 이용해 ans의 크기를 정하고 들어가는 것도 버퍼 재할당을 막아 시간 복잡도를 줄이는 방법이라 생각함.
*/

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    int cnt = 0;
    string ans = "";
    string str;

    while (true) {
        cin >> str;

        if (str=="0") {
            cout << cnt << '\n';
            for (char ch : ans) {
                if (isalpha(ch)) cout << ch;
                else if (isdigit(ch)) cout << '\n';
            }
            break;
        }

        else {
            if (cnt % 2 == 0) {
                ans += (str + '1');
            }
            cnt++;
        }
    }

    return 0;
}


// 해설 참고 풀이.
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str[201];
    int cnt = 0;

    while (true) {
        cin >> str[cnt];

        if (str[cnt] == "0")
            break;
        cnt++;
    }

    cout << cnt << '\n';

    for (int i = 0; i < cnt; i+=2) {
        cout << str[i] << '\n';
    }

    return 0;
}
