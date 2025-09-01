#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int N;
int B;
int digits[20];

int main() {
    cin >> N >> B;
    int cnt = 0;
    while (1) {
        if (N < B) {
            digits[cnt++] = N;
            break;
        }
        
        digits[cnt++] = N % B;
        N /= B;
    }

    for (int i = cnt-1; i >= 0; i--) {
        cout << digits[i];
    }

    return 0;
}