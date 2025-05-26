#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string arr[5] = {"apple", "banana", "grape", "blueberry", "orange"};

    int cnt = 0;
    char chk;
    cin >> chk;

    for (int i = 0; i < 5; i++) {
        if (arr[i][2] == chk || arr[i][3] == chk) {
            cout << arr[i] << '\n';
            cnt++;
        }
  
    }

    cout << cnt;

    return 0;
}