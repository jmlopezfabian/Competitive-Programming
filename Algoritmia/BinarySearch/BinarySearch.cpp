#include <bits/stdc++.h>

using namespace std;

bool BS(int l, int r, int t,vector<int> a){
	if(l>r){
		return false;
	}
	int middle = (l+r) / 2;
	if(a[m] == t){
		return true;
	}
	if(a[m] < t){
		return BS(m+1,r,t,a);
	}
	if(a[m] > t){
		return BS(l,m-1,t,a);
	}
}

//Middle Optimization
//
//m = l+((r-l)/2)
