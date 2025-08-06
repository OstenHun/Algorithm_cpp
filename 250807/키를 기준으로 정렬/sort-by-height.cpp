#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int n;
string name[10];
int height[10];
int weight[10];

class Person {
    public:
        string name;
        int height, weight;
        Person(string name, int height, int weight) {
            this->name = name;
            this->height = height;
            this->weight = weight;
        }
};

bool cmp(const Person &a, const Person &b) {
    return a.height < b.height;
}

vector<Person> people;

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        string name;
        int height, weight;

        cin >> name >> height >> weight;
        people.emplace_back(name, height, weight);
    }

    sort(people.begin(), people.end(), cmp);

    for (auto i : people) 
        cout << i.name << ' ' << i.height << ' ' << i.weight << '\n';

    return 0;
}