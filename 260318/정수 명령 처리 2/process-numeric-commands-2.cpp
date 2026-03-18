#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main() {
    string input;
    queue<int> My_q;
    int loop_num;
    cin >> loop_num;

    for (int i = 0; i < loop_num; i++) {
        cin >> input;

        if (input == "push") {
            int num;
            cin >> num;
            My_q.push(num);
        } else if (input == "pop") {
            if (My_q.empty()) {
                break;
            } else {
                cout << My_q.front() << '\n';
                My_q.pop();
            }
        } else if (input == "size") {
            cout << My_q.size() << '\n';
        } else if (input == "empty") {
            if (My_q.empty()) 
                cout << 1 << '\n';
            else
                cout << 0 << '\n';
        } else if (input == "front") {
            cout << My_q.front() << '\n';
        }
        
    }
    
    return 0;
}