#include <iostream>
using namespace std;

int N;
int Sum(int x) {
    int s = 0;                                                                                                                                                                                                                             
    for (int i = 1; i <= x; i++) {
        s += i;
    }
 
    s = s / 10;

    return s;
}

int main() {
    cin >> N;

    cout << Sum(N);

    return 0;
}