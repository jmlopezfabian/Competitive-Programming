#include <bits/stdc++.h>

using namespace std;

void imprimir_set(set<int> set){
	for(auto it: set){
		cout<<it<<endl;
	}
}

int main(){
	set<int> order_set;
	order_set.insert(12);
	order_set.insert(5);
	order_set.insert(-10);
	order_set.insert(-10);

	//Iterar sobre un set
	for(auto it: order_set){
		cout<<it<<endl;
	}

	auto it = order_set.begin();
	for(it; it != order_set.end(); it++){
		cout<<*it<<endl;
	}
}
