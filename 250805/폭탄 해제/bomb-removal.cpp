#include <iostream>
#include <string>

using namespace std;

string unlock_code;
char wire_color;
int seconds;

class Tnt{
    public:
        string code;
        char color;
        int time;

        Tnt(string x, char y, int z) {
            this -> code = x;
            this -> color = y;
            this -> time = z;
        }
};

int main() {
    cin >> unlock_code >> wire_color >> seconds;

    Tnt bomb = Tnt(unlock_code, wire_color, seconds);

    cout << "code : " << bomb.code << '\n';
    cout << "color : " << bomb.color << '\n';
    cout << "second : " << bomb.time;

    return 0;
}