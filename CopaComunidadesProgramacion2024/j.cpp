#include <bits/stdc++.h>

using namespace std;

void solution(){
    int n; 
    cin >> n;
    
    map<string, int> bucket;
    unordered_map<string, string> adj;

    for(int i = 0; i < n - 1; i++){
        string a, b;
        cin >> a >> b;
        bucket[a]++;
        bucket[b]++;
        adj[a] = b;
    }

    string start_person;
    for(auto& kv : bucket){
        if(kv.second == 1){
            start_person = kv.first;
            break;
        }
    }

    vector<string> original_order;
    string current_person = start_person;
    while(!current_person.empty()){
        original_order.push_back(current_person);
        current_person = adj[current_person];
    }

    for(auto it = original_order.rbegin(); it != original_order.rend(); ++it){
        cout << *it << endl;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solution();
    return 0;
}
