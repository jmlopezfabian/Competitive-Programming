#include <bits/stdc++.h>

using namespace std;

int main(){
	int n; cin>>n;
	vector<int> drinks(n);
	float sum = 0;
	float aux;
	for(int i=0; i<n; i++){
		cin>>aux;
		sum += aux;
	}
	cout<<sum / n;
}

	
