#include <iostream>

using namespace std;

int N;

int Seq(int n) {
    if (n==1) 
        return 2;
    if (n==2)
        return 4;
    
    return Seq(n-1)*Seq(n-2)%100;
}
int main() {
    cin >> N;

    cout << Seq(N);

    return 0;
}