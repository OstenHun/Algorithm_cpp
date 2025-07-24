// 내 풀이
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

// 해설
#inlcude <iostream>
using namespace std;

#define MAX_N 100

int n1, n2;
int a[MAX_N], b[MAX_N];

bool IsSame(int n) {
    for (int i = 0; i < n2; i++) {
        if (a[i+n] != b[i])
            return false;
    }

    return true;
}

bool IsSubsequence() {
    for (int i = 0; i <= n1 - n2; i++) {
        if (IsSame(i))
            return true;
    }

    return false;
}

int main() {
    cin >> n1 >> n2;

    for (int i = 0; i < n1; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n2; i++) {
        cin >> b[i];
    }

    if (IsSubsequence())
        cout << "Yes";
    else
        cout << "No";

    return 0;
}
