#include <iostream>
#include <queue>
using namespace std;

int n;
int num;
priority_queue<int> pq;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num;
        if (num > 0)
            pq.push(-num);
        else if (num == 0) {
            if (pq.size()==0)
                cout << 0 << '\n';
            else {
                int min = -pq.top();
                pq.pop();
                cout << min << '\n';
            }
        } 
    }

    return 0;
}
