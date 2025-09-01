#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int n;

class Person {
    public:
        string name;
        int height, weight;

        Person(string n, int h, int w) {
            this->name = n;
            this->height = h;
            this->weight = w;
        }
};

bool cmp(const Person &x, const Person &y) {
    if(x.height==y.height)
        return x.weight > y.weight;

    return x.height < y.height;
}

vector<Person> people;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        string n;
        int h, w;
        cin >> n >> h >> w;
        people.emplace_back(n, h, w);
    }

    sort(people.begin(), people.end(), cmp);

    for (auto i : people) {
        cout << i.name << ' ' << i.height << ' ' << i.weight << '\n';
    }

    return 0;
}