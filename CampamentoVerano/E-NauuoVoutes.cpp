    #include <bits/stdc++.h>
     
    using namespace std;
     
    void solution(){
        int x,y,z;
        cin>>x>>y>>z;
        if(z == 0){
            if(x > y){
                cout<<"+"<<endl;
            }else if(x<y){
                cout<<"-"<<endl;
            }else{
                cout<<"0"<<endl;
            }
        }
        //x = 2 , y = 0, z = 1
        else{
            if(x<=y){
                if(x + z >= y){
                    cout<<"?"<<endl;
                }else if(x + z < y){
                    cout<<"-"<<endl;
                }
            }else{
                if(y + z >= x){
                    cout<<"?"<<endl;
                }else if(y + z < x){
                    cout<<"+"<<endl;
                }
            }
            
        }
    }
     
    int main(){
        int t;
        t = 1;
        while(t--){
            solution();
        }
    }
