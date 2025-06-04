#include <iostream>
using namespace std;

int main() {
    char give;
    cin >> give;

    if (give == 'a') cout << 'z';
    else {
        (int) give--;
        cout << give;
    }
    return 0;
}