// 최고의 풀이라 생각함.
#include <iostream>

using namespace std;

int M, D;

bool IsDate(int m, int d) {
    int dates[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (m <= 12 && 1 <= d && d <= dates[m-1]) return true;
    return false;
}

int main() {
    cin >> M >> D;

    if (IsDate(M, D)) cout << "Yes";
    else cout << "No";

    return 0;
}

// 내 첫 풀이
#include <iostream>

using namespace std;

int M, D;

bool IsIn(int m, int d) {
    if (m == 2) {
        if (0 <= d && d <= 28) return true;
    }

    else if (m==4 || m==6 || m==9 || m==11) {
        if (0 <= d && d <= 30) return true;
    }

    else if (1 <= m && m <= 12) {
        if (0 <= d && d <= 31) return true;
    }

    return false;
}

int main() {
    cin >> M >> D;

    if (IsIn(M, D)) cout << "Yes";
    else cout << "No";

    return 0;
}

// 해설 풀이 참고
#include <iostream>
using namespace std;

int LastDay(int m) {
    if (m == 2) 
        return 28;
    if (m==4 || m==6 || m==9 || m==11)
        return 30;
    
    return 31;
}

bool JudgeDay(int m, int d) {
    if (m <= 12 && d <= LastDay(m)) 
        return true;
    
    return false;
}

int main() {
    int m, d;
    cin >> m >> d;

    if (JudgeDay(m, d)) cout << "Yes";
    else cout << "No";

    return 0;
}
