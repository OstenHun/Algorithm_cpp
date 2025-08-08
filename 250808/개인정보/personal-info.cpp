#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Person {
    public:
        string name;
        int height;
        float weight;

        Person(string n, int h, float w) {
            this->name = n;
            this->height = h;
            this->weight = w;
        }
};

bool cmp_name(const Person &x, const Person &y) {
    return x.name < y.name;
}

bool cmp_height(const Person &x, const Person &y) {
    return x.height > y.height;
}

vector<Person> people;

int main() {
    for (int i = 0; i < 5; i++) {
        string name;
        int h;
        float w;
        cin >> name >> h >> w;
        people.emplace_back(name, h, w);
    }
    sort(people.begin(), people.end(), cmp_name);
    cout << fixed;
    cout.precision(1);
    cout << "name" << '\n';
    for (auto i: people) {
        cout << i.name << ' ' << i.height << ' ' << i.weight << '\n';
    }

    sort(people.begin(), people.end(), cmp_height);

    cout << '\n' << "height" << '\n';
    for (auto i : people) {
        cout << i.name << ' ' << i.height << ' ' << i.weight << '\n';
    }

    return 0;
}