#include <bits/stdc++.h>

using namespace std;

int main(){
    int h,w;
    cin>>h>>w;
    char ch;
    int val = 0;
    int slash_count = 0;
    int dot_count = 0;
    bool flag = false;
    int i=0;
    int j=0;
    //cout<<h<<endl;
    //cout<<w<<endl;
    for( i=0; i<h; i++){
        for( j=0; j<w; j++){
            //cout<<"i:"<<i<<endl;
            //cout<<"j:"<<j<<endl;
            cin>>ch;
            val = (int) ch;
            if(val == 47 || val == 92){
                slash_count ++;
                //cout<<slash_count;
                if(slash_count %2 == 0){
                    flag = false;
                }else{
                    flag = true;
                }
            }else if(val == 46 && flag == true){
                dot_count++;;
                //cout<<dot_count;
            }else{
                continue;
            }
        }
    }
    //cout<<slash_count<<endl;
    //cout<<dot_count<<endl;

    cout<<"\n"<<slash_count * 0.5 + dot_count;
}