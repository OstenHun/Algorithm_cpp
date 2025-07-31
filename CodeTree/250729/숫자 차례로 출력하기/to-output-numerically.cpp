#include <iostream>

using namespace std;

int N;
void PrintStarStraight(int n) {
    if (n==0) 
        return;
    PrintStarStraight(n-1);

    cout << n << ' ';
}

void PrintStarReverse(int n) {
    if (n==0){
        cout << '\n';
        return;
    }

    cout << n << ' ';

    PrintStarReverse(n-1);

}

int main() {
    cin >> N;

    PrintStarStraight(N);
    cout << '\n';
    PrintStarReverse(N);

    return 0;
}