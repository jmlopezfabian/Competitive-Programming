#include <bits/stdc++.h>

using namespace std;

<<<<<<< HEAD

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
=======
void solution(){
	int l,r,a,b,x;
	cin>>l>>r>>x>>a>>b;

}


void solution2(){
    int l, r, a, b, x;
    cin >> l >> r >> x >> a >> b;

    vector<int> dist(r + 1, -1);
    unordered_set<int> visited;
    dist[a] = 0;
    visited.insert(a);

    queue<int> q;
    q.push(a);

    while (!q.empty()) {
        int current = q.front();
        q.pop();
        visited.erase(current);  // Eliminar de los visitados
        
        for (int t : {b, l, r}) {
            int distance = abs(current - t);
            if (dist[t] == -1 && distance >= x) {
                dist[t] = dist[current] + 1;
                q.push(t);
                visited.insert(t);  // Agregar a los visitados
            }
        }
        
        if (visited.count(b)) {
            break;
        }
    }

    cout << dist[b] << endl;
}

int main(){
	int t;cin>>t;
	while(t--){
		solution2	();
	}

>>>>>>> 02eb73a (918 Div4 Contest)
}
