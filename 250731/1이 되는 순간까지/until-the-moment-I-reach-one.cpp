#include <iostream>

using namespace std;

int N, cnt;

int F(int n) {
    if (n==1)
        return cnt;

    if (n%2==0) {
        cnt++;
        return F(n/2);
    }

    cnt++;
    return F(n/3);

}
int main() {
    cin >> N;

    cout << F(N);

    return 0;
}