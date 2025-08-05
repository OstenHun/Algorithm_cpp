#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

class Person {
    public:
        string name, add, city;

        Person(string n, string a, string c) {
            this -> name = n;
            this -> add = a;
            this -> city = c;
        }
};

int main() {
    int n;
    cin >> n;

    vector<Person> people;

    for (int i = 0; i < n; i++) {
        string n, ad, ci;
        cin >> n >> ad >> ci;
        people.emplace_back(n, ad, ci);
    }   

    sort(people.begin(), people.end(), [](const Person& a, const Person& b) {
        return a.name < b.name;
    });

    if (!people.empty()) {
        Person last_person = people.back();

        cout << "name " << last_person.name << '\n';
        cout << "addr " << last_person.add << '\n';
        cout << "city " << last_person.city;
    }

    return 0;
}