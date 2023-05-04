#include <iostream>

using namespace std;


int main(int argc, char** argv){
    char string[100];
    int contador = 0;
	bool flag = true;
    int i=0, j=0;

    cin>>string;
	while(string[i] != '\0'){
		flag = true;
		j=i+1;
		while(string[j] != '\0' && flag == true){
			if(string[i] == string[j]){
				flag = false;
			}
			j++;
		}
		if(flag == true){
			contador++;
		}
		i++;
	}
	if(contador % 2 == 0){
		cout<<"CHAT WITH HER!";
	}else{
		cout<<"IGNORE HIM!";
	}
}
