#include <iostream>

using namespace std;

int n;

bool Check(int x) {
    return x%2==0 && (x/10+x%10) == 0;
}

int main() {
    cin >> n;

    if(!Check(n)) cout << "Yes";
    else cout << "No";

    return 0;
}