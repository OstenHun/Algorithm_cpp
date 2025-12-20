#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int n;
vector<int> ans;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    for (int i = 0;i < n; i++) {
        string order;
        cin >> order ;
        if (order == "push_back" || order == "get") {
            int num;
            cin >> num;
            if (order == "get") {
                cout << ans[num-1] << '\n';
            } else {
                ans.push_back(num);
            }
        } else if (order == "pop_back") {
            ans.pop_back();
        } else if (order == "size") {
            cout << ans.size() << '\n';
        } 
    }
    
    return 0;
}