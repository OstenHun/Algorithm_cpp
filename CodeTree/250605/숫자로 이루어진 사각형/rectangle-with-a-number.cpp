#include <iostream>

using namespace std;

void printNum(int x) {
    int cnt = 1;
    for (int i = 1; i <= x; i++) {
        for (int j = 1; j<= x; j++) {
            if (cnt==10) cnt = 1;
            cout << cnt++ << ' ';
        }
        cout << '\n';
    }
}


int N;

int main() {
    cin >> N;

    printNum(N);

    return 0;
}