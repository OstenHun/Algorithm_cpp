#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Student {
    public:
        int height, weight, num;

        Student(int x, int y, int z) {
            this->height = x;
            this->weight = y;
            this->num = z;
        }
};

vector<Student> info;

bool cmp(const Student &a, const Student &b) {
    if (a.height != b.height)
        return a.height < b.height;
    return a.weight > b.weight;
}

int N;

int main() {
    cin >> N;

    int nm = 1;
    for (int i = 0; i < N; i++) {
        int h, w;
        cin >> h >> w;
        info.emplace_back(h, w, nm++);
    }

    sort(info.begin(), info.end(), cmp);

    for (auto i : info) 
        cout << i.height << ' ' << i.weight << ' ' << i.num << '\n';

    return 0;
}