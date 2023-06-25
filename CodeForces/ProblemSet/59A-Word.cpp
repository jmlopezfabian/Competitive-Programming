#include<bits/stdc++.h>

using namespace std;

int NumLowerCase(string s){
	int n = s.length();
	int ans = 0;
	for(int i=0; i<n; i++){
		if((int) s[i] >= 97 && (int) s[i] <= 122){
			ans++;
		}
	}
	return ans;
}

int NumUpperCase(string s){
	int n = s.length();
	int ans = 0;
	for(int i=0; i<n; i++){
		if((int) s[i] >= 65 && (int) s[i] <= 90)
			ans++;
	}
	return ans;
}

void ToUpperCase(string &s){
	int n = s.length();
	for(int i=0; i<n; i++){
		if(!((int) s[i] >= 65 && (int) s[i] <= 90)){
			s[i] -= 32;
		}
	}
}

void ToLowerCase(string &s){
	int n = s.length();
	for(int i=0; i<n; i++){
		if(((int) s[i] >= 65 && (int) s[i] <= 90)){
			s[i] += 32;
		}
	}
}

int main(){
	string s;
	cin>>s;
	//cout<<NumLowerCase(s)<<endl;
	//cout<<NumUpperCase(s)<<endl;
	//ToLowerCase(s);
	//cout<<s<<endl;
	if(NumLowerCase(s) > NumUpperCase(s)){
		ToLowerCase(s);
		cout<<s<<endl;
	}
	else if(NumLowerCase(s) < NumUpperCase(s)){
		ToUpperCase(s);
		cout<<s<<endl;
	}
	else if(NumLowerCase(s) == NumUpperCase(s)){
		ToLowerCase(s);
                cout<<s<<endl;
	}
}

