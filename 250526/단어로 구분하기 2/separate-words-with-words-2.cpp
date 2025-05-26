#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string mat[10];

    for (int i = 0; i < 10; i++) {
        cin >> mat[i];
        if (i%2==0) cout << mat[i] << '\n';
    }
    return 0;
}