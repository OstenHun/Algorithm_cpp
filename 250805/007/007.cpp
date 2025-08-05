#include <iostream>
#include <string>

using namespace std;

string secret_code;
char meeting_point;
int t;

class Agent {
    public:
        string code;
        char place;
        int ti;

        Agent(string x, char y, int z) {
            this -> code = x;
            this -> place = y;
            this -> ti = z;
        }
};

int main() {
    cin >> secret_code >> meeting_point >> t;

    Agent agent1 = Agent(secret_code, meeting_point, t);

    cout << "secret code : " << agent1.code << '\n';
    cout << "meeting point : " << agent1.place << '\n';
    cout << "time : " << agent1.ti;

    return 0;
}