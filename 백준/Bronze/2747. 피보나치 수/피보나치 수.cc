//Recursion 이용 >> 이는 시간복잡도 O(2^n) 이므로 비효율적임.
#include <bits/stdc++.h>
using namespace std;

int Fibo(int n) {
    if(n == 0) return 0;
    if(n == 1) return 1;
    
    int a = 0, b = 1, c;
    for(int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int n = 0;
int main() {
    cin >> n;
    cout << Fibo(n);
}

//반복문 사용.
#include <bits/stdc++.h>
using namespace std;

int Fibo(int n) {
    if(n == 0) return 0;
    if(n == 1) return 1;

    int a = 0, b = 1, c;
    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int n = 0;
int main() {
    cin >> n;
    cout << Fibo(n);
}
