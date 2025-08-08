#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int N;

class Position {
    public:
        int x, y, num;

        Position(int x, int y, int z) {
            this->x = x;
            this->y = y;
            this->num = z;
        }
};

bool cmp(const Position &a, const Position &b) {
    if(a.x+a.y!=b.x+b.y)
        return a.x+a.y < b.x+b.y;
    return a.num < b.num;
}

vector<Position> cor;

int main() {
    cin >> N;
    int nm = 1;

    for (int i = 0; i < N; i++) {
        int x, y;
        cin >> x >> y;
        if (x < 0) x = -x;
        if (y < 0) y = -y;
        cor.emplace_back(x, y, nm++);
    }

    sort(cor.begin(), cor.end(), cmp);

    for (auto i : cor) {
        cout << i.num << '\n';
    }

    return 0;
}

// 절댓값 씌우는 메서드, pair을 이용한 풀이.
#include <iostream>
#include <algorithm>
#include <cmath>
#include <utility>
#define MAXN 1000

using namespace std;

int GetDistFromOrigin(int x, int y) {
    return abs(x) + abs(y);
}

pair<int, int> distances[MAXN];

int main() {
    int n;
    cin >> n;

    int x, y;
    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        distances[i] = make_pair(GetDistFromOrigin(x, y), i+1);
    }

    sort(distances, distances + n);

    for (int i = 0; i < n; i++) 
        cout << distances[i].second << '\n';

    return 0;
}
