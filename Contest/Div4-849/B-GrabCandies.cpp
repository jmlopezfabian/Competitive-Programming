#include <bits/stdc++.h>

using namespace std;

void solution(){
	int n;cin>>n;
	int aux;
	int sum_odd = 0, sum_even = 0; //Even -> par
	for(int i=0;i<n;i++){
		cin>>aux;
		if(aux % 2 == 0){
			sum_even += aux;
		}else{
			sum_odd += aux;
		}
	}
	if(sum_even > sum_odd){
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

	
