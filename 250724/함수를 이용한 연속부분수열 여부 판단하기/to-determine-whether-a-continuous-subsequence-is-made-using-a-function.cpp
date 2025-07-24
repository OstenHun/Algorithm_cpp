#include <iostream>

using namespace std;

int n1, n2;
int a[100], b[100];

bool chk(int x, int y) {
    int start = 0;
    int cnt = 0;
    for (int i = 0; i < x-y+1; i++) {
        for (int j = 0; j < y; j++) {
            if (a[j+start]==b[j]) cnt++;
        }
        if (cnt==y) return true;
        else cnt = 0;
        start++;
    }

    return false;
}

int main() {
    cin >> n1 >> n2;

    for (int i = 0; i < n1; i++) cin >> a[i];

    for (int i = 0; i < n2; i++) cin >> b[i];

    if (chk(n1, n2)) cout << "Yes";
    else cout << "No";

    return 0;
}