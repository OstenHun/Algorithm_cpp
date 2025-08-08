#include <iostream>

using namespace std;

int a, b, c, d;

int main() {
    cin >> a >> b >> c >> d;

    int elapsed_time = 0;

    while (1) {
        if (a == c && b == d) 
            break;
        
        elapsed_time++;
        b++;

        if (b == 60) {
            a++;
            b = 0;
        }

    }

    cout << elapsed_time;
    
    return 0;
}