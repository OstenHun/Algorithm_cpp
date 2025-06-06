#include <iostream>
#include <algorithm>
using namespace std;

int a, b, c;

int Min(int x, int y, int z) {
    return min({x, y, z});
}

int main() {
    cin >> a >> b >> c;

    cout << Min(a, b, c);
    
    return 0;
}