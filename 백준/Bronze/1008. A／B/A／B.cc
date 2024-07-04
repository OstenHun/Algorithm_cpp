#include <bits/stdc++.h>
using namespace std;

int a, b;
double divide;
int main() {
    cin >> a >> b;
    divide = a / (double) b;
    cout.precision(10);
    cout << divide;
    return 0;
}

// chatgpt가 추천한 풀이.
-> fixed, setprecision을 활용해 소수점 이하 자릿수를 고정해(고정소수점) 출력의 정확성을 올린다.
    
#include <bits/stdc++.h>
using namespace std;

int main() {
    double A, B;
    cin >> A >> B;

    // 나눈 결과를 소수점 10자리까지 출력
    cout << fixed << setprecision(10) << A / B << endl;

    return 0;
}

// setprecision과 cout.precision의 차이
// setprecision은 함수 호출 형태로 사용하고, cout.precision은 멤버 함수 호출 형태로 사용.
// setprecision은 #include <iomanip>가 필요하며, 스트림 조작자. cout.precision은 스트림 객체의 멤버 함수.

// 동작 방식:
// fixed 조작자와 함께 사용하면, 둘 다 소수점 이하 자릿수를 설정.
// fixed 조작자 없이 사용하면, 둘 다 전체 유효 자릿수를 설정.
// -> 따라서 소수점 아래 자릿수에 대해 정확하게 접근하기 위해서는 fixed 조작자와 함께 사용하여 소수점 이하 자릿수를 설정해야한다.//
    cout.precision(자릿수 + 1)
    cout << fixed;

// >> 부동소수점, 유효 자릿수, 유효 숫자에 대해 학습에 도움이 됐다.
