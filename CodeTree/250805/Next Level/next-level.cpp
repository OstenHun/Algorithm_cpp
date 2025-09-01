#include <iostream>
#include <string>

using namespace std;

string user2_id;
int user2_level;

class User {
    public:
        string user_id;
        int level;

        User(string x, int y) {
            this -> user_id = x;
            this -> level = y;
        }
};

int main() {
    cin >> user2_id >> user2_level;

    User user1 = User("codetree", 10);
    User user2 = User(user2_id, user2_level);

    cout << "user " << user1.user_id << " lv " << user1.level << '\n';
    cout << "user " << user2.user_id << " lv " << user2.level << '\n';

    return 0;
}