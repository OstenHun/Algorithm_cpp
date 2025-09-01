#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int n;
string name[10];
int korean[10];
int english[10];
int math[10];

class Test {
    public:
        string name;
        int kor, eng, math;

        Test(string name, int kor, int eng, int math) {
            this->name = name;
            this->kor = kor;
            this->eng = eng;
            this->math = math;
        }
};

bool cmp (const Test &x, const Test &y) {
    if (x.kor == y.kor) {
        if (x.eng == y.eng) {
            return x.math > y.math;
        }

        return x.eng > y.eng;
    }

    return x.kor > y.kor;
}

vector<Test> docks;

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        string name;
        int kor, eng, math;
        cin >> name >> kor >> eng >> math;
        docks.emplace_back(name, kor, eng, math);
    }

    sort(docks.begin(), docks.end(), cmp);

    for (auto i : docks) {
        cout << i.name << ' ' << i.kor << ' ' << i.eng << ' ' << i.math << '\n';
    }

    return 0;
}