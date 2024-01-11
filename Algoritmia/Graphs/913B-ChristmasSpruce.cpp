//#include <bits/stdc++.h>
//
//using namespace std;
//
//int main(){
//    int n; cin>>n;
//
//    vector<vector<int>> adj(n+1);
//    int aux;
//    for(int i=1; i<n; i++){
//        cin>>aux;
//        adj[aux].push_back(i+1);
//    }
//
//    //for(int i=1; i<n; i++){
//    //    cout<<"Padre: "<<i<<endl;
//    //    for(auto it2: adj[i]){
//    //        cout<<it2<<" ";
//    //    }
//    //    cout<<"\n";
//    //}
//
//    vector<int> degrees(n+1);
//    for(int i=1; i<n; i++){
//        degrees[i] = adj[i].size();
//    }
//
//    //for(auto it: degrees){
//    //    cout<<it<<" ";
//    //}
////
//    //cout<<endl;
//
//    //Nodos hoja
//    int count = 0;
//    vector<int> leaf(n+1);
//    for(int i=1; i<n; i++){
//        count =  0;
//        for(int j=0;j<adj[i].size(); j++){
//            
//            if(degrees[adj[i][j]] == 0){
//                count++;
//            }
//        }
//        leaf[i] = count;
//    }
//
//    //for(auto it: leaf){
//    //    cout<<it<<" ";
//    //}
//    //cout<<endl;
//    vector<int> parents;
//    for(auto i=1; i<n; i++){
//        if(adj[i].size() != 0){
//            parents.push_back(i);
//        }
//    }
//
//    for(auto it: leaf){
//        cout<<it<<" ";
//    }
//    cout<<endl;
//
//    for(int i=0; i<parents.size(); i++){
//        if(leaf[parents[i]] != 0 && leaf[parents[i]] < 3 ){
//            cout<<"NO"<<endl;
//            return 0;
//        }
//    }
//    cout<<"YES"<<endl;
//}


#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> p(n), deg(n);
  for (int i = 1; i < n; i++) {
    cin >> p[i];
    p[i]--;
    deg[p[i]]++;
  }
  vector<int> sons_leaves(n);
  for (int i = 0; i < n; i++) {
    if (deg[i] == 0) {
      sons_leaves[p[i]]++;
    }
  }
  for (int i = 0; i < n; i++) {
    if (deg[i] > 0 && sons_leaves[i] < 3) {
      puts("No");
      return 0;
    }
  }
  puts("Yes");
  return 0;
}