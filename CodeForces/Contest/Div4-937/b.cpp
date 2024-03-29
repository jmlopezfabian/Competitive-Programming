#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

string convertTo12HourFormat(string time) {
    stringstream ss(time);
    int hour, minute;
    char colon;
    ss >> hour >> colon >> minute;

    string period = (hour < 12) ? "AM" : "PM";

    if (hour == 0)
        hour = 12;
    else if (hour > 12)
        hour -= 12;

    stringstream result;
    result << (hour < 10 ? "0" : "") << hour << ":" << (minute < 10 ? "0" : "") << minute << " " << period;
    return result.str();
}

void solution() {
    string aux; 
    cin >> aux;
    cout << convertTo12HourFormat(aux) << endl;
}

int main() {
    int t; 
    cin >> t;
    while(t--) {
        solution();
    }
    return 0;
}
