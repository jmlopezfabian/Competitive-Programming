#include <bits/stdc++.h>

using namespace std;

void solution(){
	string aux;
	cin>>aux;
	if(aux == "abc" || aux == "bac" || aux == "acb" || aux == "cba"){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
	}
}

int main(){
	int t;cin>>t;
	while(t--){
		solution();	
	}
}
