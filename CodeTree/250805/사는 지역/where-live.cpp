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


// 해설 풀이 -> 선형 정렬로 문제 상황만을 해결하는데 가장 효율적임.
#include <iostream>
using namespace std;

const int MAXN = 10;

class Person {
    public:
        string name;
        string street_address;
        string region;
        
        Person(string name, string street_address, string region) {
            this->name = name;
            this->street_address = street_address;
            this->region = region;
        }
        Person(){}
};

Person people[MAXN];

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string name, address, region;
        cin >> name >> address >> region;

        people[i] = Person(name, address, region);
    }

    int last_idx = 0;
    for (int i = 1; i < n; i++) {
        if (people[i].name > people[last_idx].name)
            last_idx = i;
    }

    cout << "name " << people[last_idx].name << '\n';
    cout << "addr " << people[last_idx].street_address << '\n';
    cout << "city " << people[last_idx].region << '\n';
    return 0;
}
