#include <iostream>
#include <string>
using namespace std;

bool is_subsequence(string s, string t) {
    int i = 0, j = 0;
    while (i < s.size() && j < t.size()) {
        if (s[i] == t[j]) {
            j++;
        }
        i++;
    }
    if(j==t.size()){
        return true;
    }else{
        return false;
    }
}

int main() {
    string s, t;
    cin >> s >> t;

    int max_len = 0;
    for (int l = 0; l < s.size(); l++) {
        for (int r = l; r < s.size(); r++) {
            string sub = s.substr(0, l) + s.substr(r + 1);
            if (is_subsequence(sub, t)) {
                max_len = max(max_len, r - l + 1);
            }
        }
    }
    cout << max_len << endl;
    return 0;
}