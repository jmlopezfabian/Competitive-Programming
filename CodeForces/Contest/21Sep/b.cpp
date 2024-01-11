#include <bits/stdc++.h>

using namespace std;

void solution(){
	int n;cin>>n;
	vector<int> a(n);
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	int min = INT_MAX;
	int pos = 0;
	for(int i=0; i<n; i++){
		if(a[i] <= min){
			min = a[i];
			pos = i;
		}
	}
	int ans = 1;
	for(int i=0; i<n; i++){
		if(i == pos){
			ans *= a[i] + 1;
		}else{
			ans *= a[i];
		}
	}
	cout<<ans<<endl;
}

int main(){
	int t; cin>>t;
	while (t--){
		solution();
	}
	
}