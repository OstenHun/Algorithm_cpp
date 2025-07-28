#include <iostream>

using namespace std;

int n, m;
int sum;
int A[100];

void DivideASum(int *x) {
    while (m!=1) {
        sum += x[m-1];
        if (m%2==0) m/=2;
        else m--;

    }

    cout << sum+x[0];
}



int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    DivideASum(A);

    return 0;
}