#include <bits/stdc++.h>

using namespace std;

int main(){
	string input;
	cin>>input;
	for(int i=0; i<input.size(); i++){
		if(input[i] == '.')
			cout<<0;
		else if(input[i] == '-' && input[i+1] == '.'){
			cout<<1;
			i++;
		}else{
			cout<<2;
			i++;
		}
	}
	cout<<"\n";
}
