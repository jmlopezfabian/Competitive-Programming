/*
Link: Valid Palindrome

Al utilizar two pointers en este problema, la complejidad en tiempo es n y la complejidad en espacio es 1.
Ya que solo estamos creando 2 variables

Si no usaramos two pointers, la complejidad seria n en ambos casos

Move zeroes
swap(arr[l],arr[r]) <- realiza un intercambio 

*/

#include <iostream>
#include <string>

using namespace std;

void clear_string(string s){
    
}

bool palindrome(string s){
    int l = 0;
    int r = s.size() - 1;
    while(l <= r){
        if(s[l]  != s[r]){
            return false;
        }
        l++;
        r--;
    }
    return true;
}

int main(){
    string s1;
    cin>>s1;

}