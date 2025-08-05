#include <iostream>

#define MAX_N 5

using namespace std;

char codename[MAX_N];
int score[MAX_N];

class Agent {
    public:
        char code;
        int grade;

        Agent(char x = ' ', int y = 0) {
            this -> code = x;
            this -> grade = y;
        }
};



int main() {
    for (int i = 0; i < MAX_N; i++) {
        cin >> codename[i] >> score[i];
    }

    Agent agents[5];
    Agent g = Agent(' ', 100);
    for (int i = 0; i < 5; i++) {
        char code;
        int grade;
        agents[i] = Agent(codename[i], score[i]);

        if (g.grade >= agents[i].grade) g = agents[i];
    }

    cout << g.code << ' ' << g.grade;
    
    return 0;
}
