#include <bits/stdc++.h>

using namespace std;

void solution(){
	long long n; cin>>n;
	long long ans;
	long long dos = 2;
	long long uno = 1;
	if(n%dos == 0ll){
		ans = n/dos;
	}else{
		ans = (n-uno) / dos;
		//cout<<ans<<endl;
		ans = ans - n;
	}
	cout<<ans<<endl;
}
int main(){
	solution ();
}
