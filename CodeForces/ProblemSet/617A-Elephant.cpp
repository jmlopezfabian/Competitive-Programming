#include <bits/stdc++.h>

using namespace std;

void solution(){
	int x; cin>>x;
	vector<int> pasos = {5,4,3,2,1};
	int it = 0, ans = 0;
	while(x>0){
		x -= pasos[it];
		if(x<0){
			x += pasos[it];
			it ++;
		}else{
			ans++;
		}
	}
	cout<<ans<<endl;
}
int main(){
	solution();
}
