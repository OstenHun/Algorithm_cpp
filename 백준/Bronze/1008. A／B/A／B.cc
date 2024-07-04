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
