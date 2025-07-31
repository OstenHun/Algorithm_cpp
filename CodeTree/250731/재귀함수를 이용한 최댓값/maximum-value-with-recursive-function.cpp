#include <iostream>

using namespace std;

int n;
int arr[100];
int mx;

int Max(int x) {
    if (x == 0) return 0;
    if (arr[x-1] > mx) {
        mx = arr[x-1]; 
    }
    
    return Max(x-1);
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    Max(n);
    cout << mx;

    return 0;
}

// 해설
#include <iostream>
#include <algorithm>
using namespace std;

int n;
int arr[100];

int MaxValue(int a) {
    if (a==0)
        return arr[0];

    return max(MaxValue(a-1), arr[a]);
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << MaxValue(n - 1);

    return 0;
}
