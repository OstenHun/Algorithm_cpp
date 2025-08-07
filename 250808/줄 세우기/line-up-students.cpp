#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int N;
int h[1000];
int w[1000];

class Student {
    public:
        int height, weight, num;
        Student(int x, int y, int z) {
            this->height = x;
            this->weight = y;
            this->num = z;
        }
};

bool cmp (const Student &x, const Student &y) {
    if (x.height == y.height && x.weight == y.weight)
        return x.num < y.num;

    else if (x.height == y.height)
        return x.weight > y.weight;

    return x.height > y.height; 
}

vector<Student> info;
int main() {
    cin >> N;
    int cnt = 1;

    for (int i = 0; i < N; i++) {
        int h, w;
        cin >> h >> w;
        info.emplace_back(h, w, cnt++);
    }

    sort(info.begin(), info.end(), cmp);

    for (auto i : info) 
        cout << i.height << ' ' << i.weight << ' ' << i.num << '\n';

    return 0;
}
