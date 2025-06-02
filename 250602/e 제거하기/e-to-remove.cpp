#include <iostream>
#include <string>
using namespace std;

int main() {
    string ans;
    cin >> ans;

    int start_pos = ans.find('e');
    ans.erase(start_pos, 1);

    cout << ans;
    return 0;
}