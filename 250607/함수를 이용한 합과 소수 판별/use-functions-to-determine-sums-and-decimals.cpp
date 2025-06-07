/*
    내 풀이
*/
#include <iostream>

using namespace std;

int a, b;

bool chk(int x) {
    bool chk = true;

    for (int i = 2; i < x; i++) {
        if (x % i == 0) {
            chk = false;
        }
    }

    int sum = 0;
    while (x > 0) {
        sum += x%10;
        x/=10;
    } 

    if (sum%2!=0) chk = false;

    return chk;
}

int main() {
    cin >> a >> b;

    int cnt = 0;
    for (int i = a; i <= b; i++) {
        if (chk(i)) cnt++;
    }

    cout << cnt;
    return 0;
}


/*
    해당 숫자가 소수인지 여부를 반환하는 함수 작성.
    자릿수의 합이 짝수인지 여부를 반환하는 함수 작성.
    해당 숫자가 소수이면서 자릿수의 합이 짝수인지 여부를 반환하는 함수.

    작성해서 사용한 해설.
*/

#include <iostream>
using namespace std;

bool IsPrime(int n) {
    if (n == 1) 
        return false;
    
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;

    return true;
}

bool IsDigitSumEven(int n) {
    int digit_sum = (n/100) + ((n/10)%10) + (n%10);
    if(digit_sum % 2 ==0)
        return true;

    return false;
}

bool JudgeNum(int n) {
    if (IsPrime(n) && IsDigitSumEven(n))
        return true;

    return false;
}

int main() {
    int a, b;
    cin >> a >> b;

    int cnt = 0;
    for (int i = a; i <= b; i++) {
        if (JudgeNum(i))
            cnt++;
    }

    cout << cnt;

    return 0;
}
