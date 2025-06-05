// #include <iostream>
// #include <algorithm>
// using namespace std;

// void lcm(int x, int y) {
//     int mx = max(x, y);
//     while (mx%x!=0 || mx%y!=0) mx++;

//     cout << mx;
// }
// int n, m;

// int main() {
//     cin >> n >> m;

//     lcm(n, m);

//     return 0;
// }

// #include <iostream>
// #include <algorithm>
// using namespace std;

// void findLcm(int x, int y) {
//     int gcd = 0;
//     for (int i = 1; i <= min(x,y); i++) {
//         if (x % i == 0 && y % i == 0) 
//             gcd = i;
//     }

//     cout << x * y / gcd;
// }

// int main() {
//     int n, m;
//     cin >> n >> m;

//     findLcm(n, m);

//     return 0;
// }

// // 유클리드 알고리즘 이용
// #include <iostream>
// using namespace std;

// int gcd(int x, int y) {
//     if (y==0) return x;
//     return gcd(y, x%y);
// }

// int lcm(int x, int y) {
//     return x * y / gcd(x, y);
// }

// int main() {
//     int n, m;
//     cin >> n >> m;

//     cout << lcm(n, m);

//     return 0;
// }

// __gcd 사용
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int g = __gcd(n, m);

    int lcm = n * m / g;

    cout << lcm;

    return 0; 
}

