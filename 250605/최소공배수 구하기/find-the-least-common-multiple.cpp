/*
    최소공배수를 brute-force 하게 접근해서 설계했다.
    max(x, y) 를 mx 변수로 두고 이 값이 제시된 두 수 모두를 나누어 떨어지게 한다면 최소공배수가 된다.
    만약 나누어 떨어지게 하지 않는다면 mx 값을 1씩 늘리면서 체크하면서 구한다.
    --> 문제점: 최악의 경우 O(x*y) 의 시간 복잡도를 보인다. 이는 x, y 값이 큰 경우에 불리하다.
*/
    

#include <iostream>
#include <algorithm>
using namespace std;

void lcm(int x, int y) {
    int mx = max(x, y);
    while (mx%x!=0 || mx%y!=0) mx++;

    cout << mx;
}
int n, m;

int main() {
    cin >> n >> m;

    lcm(n, m);

    return 0;
}


/*
    gcd 를 bruet-force 로 구한다. 1~min(n, m) 까지 나눠보는 방식
    lcm = n*m / gcd 로 구함. -> lcm, gcd의 관계식

    시간 복잡도 -> O(min(n, m)) -> 입력이 클수록 비효율적이다.
*/

#include <iostream>
#include <algorithm>
using namespace std;

void findLcm(int x, int y) {
    int gcd = 0;
    for (int i = 1; i <= min(x,y); i++) {
        if (x % i == 0 && y % i == 0) 
            gcd = i;
    }

    cout << x * y / gcd;
}

int main() {
    int n, m;
    cin >> n >> m;

    findLcm(n, m);

    return 0;
}

/*
    가장 좋은 방법 : 유클리드 알고리즘 활용
    GCD(a,b)=GCD(b,a mod b)
*/

#include <iostream>
#include <algorithm>
using namespace std;

int gcd (int x, int y) {
    if (y==0) return x;
    return gcd(y, x%y);
}

int lcm (int x, int y) {
    return x * y / gcd(x, y);
}

int main() {
    int n, m;
    cin >> n >> m;

    cout << lcm(n, m);

    return 0;
}


/*
    c++17 부터 추가 된 algorithm 내장 함수 __gcd(x, y) 이용
*/

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int g = __gcd(n, m);

    int lcm = n * m / g;

    cout << lcm;

    return 0; 
}
