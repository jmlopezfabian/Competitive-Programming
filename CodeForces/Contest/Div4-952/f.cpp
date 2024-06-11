#include <bits/stdc++.h>

using namespace std;

void solution(){
    int h, n;
    cin >> h >> n;

    vector<int> attacks(n);
    vector<int> cooldowns(n);
    for(int i = 0; i < n; ++i){
        cin >> attacks[i];
    }
    for(int i = 0; i < n; ++i){
        cin >> cooldowns[i];
    }

    long long turns = 0;
    vector<int> current_cooldowns(n, 0);

    while (h > 0) {
        int damage_this_turn = 0;

        bool all_on_cooldown = true;
        for (int i = 0; i < n; ++i) {
            if (current_cooldowns[i] == 0) {
                all_on_cooldown = false;
                break;
            }
        }
        if (all_on_cooldown && damage_this_turn <= 0) {
            int min_cooldown = INT_MAX;
            for (int i = 0; i < n; ++i) {
                min_cooldown = min(min_cooldown, current_cooldowns[i]);
            }
            turns += min_cooldown;
            for (int i = 0; i < n; ++i) {
                current_cooldowns[i] -= min_cooldown;
            }
        }
        else {
            for (int i = 0; i < n; ++i) {
                if (current_cooldowns[i] == 0) {
                    damage_this_turn += attacks[i];
                    current_cooldowns[i] = cooldowns[i];
                }
            }

            h -= damage_this_turn;
            ++turns;

            for (int i = 0; i < n; ++i) {
                if (current_cooldowns[i] > 0) {
                    --current_cooldowns[i];
                }
            }
        }
    }

    cout << turns << "\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--){
        solution();
    }
    return 0;
}
