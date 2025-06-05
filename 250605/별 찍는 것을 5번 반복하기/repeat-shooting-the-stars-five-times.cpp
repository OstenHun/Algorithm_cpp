#include <iostream>
using namespace std;

void print10Stars() {
    for (int i = 0; i < 10; i++) {
        cout << '*';
    }
    cout << '\n';
}
int main() {
    
    for (int i = 0; i < 5; i++) {
        print10Stars();
    }
    return 0;
}