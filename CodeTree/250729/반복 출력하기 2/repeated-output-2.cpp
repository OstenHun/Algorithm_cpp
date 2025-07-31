#include <iostream>

using namespace std;

int N;
void HelloWorld(int n) {
    if (n==0) 
        return;

    HelloWorld(n-1);
    cout << "HelloWorld" << '\n';
}

int main() {
    cin >> N;

    HelloWorld(N);

    return 0;
}