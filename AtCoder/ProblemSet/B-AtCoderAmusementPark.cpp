#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
    int N, K;
    cin >> N >> K;
    vector<int> groups(N);
    for (int i = 0; i < N; i++) {
        cin >> groups[i];
    }

    int currentSeats = K;
    int starts = 0;

    for (int i = 0; i < N; i++) {
        if (currentSeats < groups[i]) { // Not enough seats for the current group
            starts++; // Start the attraction
            currentSeats = K; // Reset the seats
        }
        // Now there will definitely be enough seats
        currentSeats -= groups[i]; // Seat the group
    }

    // Start the attraction for the last batch of people
    starts++;

    cout << starts << endl;
    return 0;
}