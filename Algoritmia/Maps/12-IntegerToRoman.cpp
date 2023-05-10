#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    string intToRoman(int num) {
        map<int,string> roman;
        string ans;
        roman[1] = "I";
        roman[4] = "IV";
        roman[5] = "V";
        roman[9] = "IX";
        roman[10] = "X";
        roman[40] = "XL";
        roman[50] = "L";
        roman[90] = "XC";
        roman[100] = "C";
        roman[400] = "CD";
        roman[500] = "D";
        roman[900] = "CM";
        roman[1000] = "M";

        int i = 0;
        int current = 0;
        auto it = roman.end();
        it--;

        for(it; it != roman.begin(), num!=0; it--){
            while(num >= it->first){
                num -= it->first;
                ans += it->second;
            }
        }
        return ans;
    }
};

int main(){
    Solution solucion;
    int num = 3;
    cout<<solucion.intToRoman(num)<<endl;
}