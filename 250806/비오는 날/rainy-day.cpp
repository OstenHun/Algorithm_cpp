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

// 더 효율적인 풀이
#include <iostream>
#include <string>

using namespace std;

class Forecast {
    public:
        string date, day, weather;
        Forecast(string date, string day, string weather) {
            this->date = date;
            this->day = day;
            this->weather = weather;
        }
};

Forecast ans = Forecast("9999-99-99", "", "");

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <=n; i++) {
        string date, day, weather;
        cin >> date >> day >> weather;

        Forecast f = Forecast(date, day, weather);
        if (weather == "Rain")
            if (ans.date >= f.date)
                ans = f;
    }

    cout << ans.date << " " << ans.day << " " << ans.weather;

    return 0;
}
