#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int n;

class Score {
    public:
        string name;
        int a, b, c;

        Score(string name, int x, int y, int z) {
            this->name = name;
            this->a = x;
            this->b = y;
            this->c = z;
        }
};

bool cmp(const Score &p, const Score &q) {
    return p.a + p.b + p.c < q.a + q.b + q.c;
}

vector<Score> docs;

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        string name;
        int sub1, sub2, sub3;
        cin >> name >> sub1 >> sub2 >> sub3;
        docs.emplace_back(name, sub1, sub2, sub3);
    }

    sort(docs.begin(), docs.end(), cmp);

    for (auto i : docs) {
        cout << i.name << ' ' << i.a << ' ' << i.b << ' ' << i.c << '\n';
    }

    return 0;
}