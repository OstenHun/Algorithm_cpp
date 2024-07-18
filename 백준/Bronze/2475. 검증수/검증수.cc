#include <bits/stdc++.h>
using namespace std;

int num, sum;
int main() {
    for (int i = 0; i < 5; i++) {
        cin >> num;
        sum += pow(num, 2);
    }

    cout << sum % 10 ;

    return 0;
}