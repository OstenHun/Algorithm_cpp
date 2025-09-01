#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N;

class Num {
    public:
        int num, pos;

        Num(int x, int y) {
            this->num = x;
            this->pos = y;
        }
};

bool cmp(const Num &a, const Num &b) {
    if (a.num!=b.num)
        return a.num < b.num;
    
    return a.pos < b.pos;
}

vector<Num> nms;
vector<Num> original;
int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        int nm;
        cin >> nm;
        nms.emplace_back(nm, i+1);
    }

    original = nms;

    sort(nms.begin(), nms.end(), cmp);
    
    for (auto i : original) {
        for (int j = 1; j <= N; j++) {
            if(i.pos == nms[j-1].pos) cout << j << ' ';
        }
    }

    return 0;
}