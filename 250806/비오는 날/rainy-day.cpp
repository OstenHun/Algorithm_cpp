#include <iostream>
#include <string>

using namespace std;

const int MAXN = 100;
int n;
string date[MAXN];
string day[MAXN];
string weather[MAXN];

class Forecast {
    public:
        string date, day, weather;

        Forecast(string date, string day, string weather) {
            this->date = date;
            this->day = day;
            this->weather = weather;
        }
        Forecast(){}
};

Forecast forecasts[MAXN];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        string date, day, weather;
        cin >> date >> day >> weather;
        forecasts[i] = Forecast(date, day, weather);
    }

    int ans_idx = -1;
    for (int i = 0; i < n; i++) {
        if(forecasts[i].weather == "Rain") {
            ans_idx = i;
            break;
        }
    }

    if (ans_idx != -1) {
        for (int i = ans_idx+1; i < n; i++) {
            if (forecasts[i].weather == "Rain") {
                if (forecasts[i].date < forecasts[ans_idx].date) {
                    ans_idx = i;
                }
            }
        }
    }

    cout << forecasts[ans_idx].date << ' ' << forecasts[ans_idx].day << ' ' << forecasts[ans_idx].weather;
    
    return 0;
}