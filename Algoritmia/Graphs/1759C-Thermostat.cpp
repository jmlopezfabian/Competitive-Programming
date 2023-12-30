#include <bits/stdc++.h>

using namespace std;


void solution(){
	int l,r,x,a,b;
	cin>>l>>r>>x>>a>>b;
	int next = a;
	vector<vector<int>> adj(r-l);
	vector<bool> vis(r-l,false);
	int ans = 0;

	while(next != b){
		vis[a] = true;
		if(a-x >= l && a-x<=r){
			next = a -x;
			if(vis[next] == true){
				next --;
			}
			//cout<<next<<endl;
		}else if(a+x >= l && a+x <= r){
			next = a + x;
			if(vis[next] == true){
				next --;
			}
		}else{
			cout<<"-1"<<endl;
			return;
		}
		
		adj[a].push_back(next);
		ans++;
		a = next;
	}
	cout<<ans<<endl;

}

int main(){
	int t; cin>>t;
	    while(t--){
	    	solution();
	    }
}
