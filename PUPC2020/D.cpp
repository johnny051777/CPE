#include<bits/stdc++.h>

using namespace std;

int main(){
    int T;
    
    cin>>T;
    
    while(T--){
        string inps="";
        int trans=2;
        int count=0;
        cin>>inps;
        vector<int> cfb(inps.length()+1,0);
        vector<int> efb(inps.length()+1,0);
        for(auto c: inps){
            if(c=='0'){
                if(trans==0){
                    efb[count]++;
                    count=0;
                } 
                trans = 1;
                count++;
            }else if(c=='1'){
                if(trans==1){
                    cfb[count]++;
                    count=0;
                } 
                trans = 0;
                count++;
            }
        }
         if(trans==0){
            efb[count]++;
            count=0;
          }else if(trans==1){
            cfb[count]++;
            count=0;
          }
        cout<<"CFBs:"<<'\n';
        for(int i=0 ; i<=inps.length() ; i++){
            if(cfb[i]!=0){
                cout<<i<<" "<<cfb[i]<<'\n';
            }
        }
        cout<<"EFBs:"<<'\n';
        for(int i=0 ; i<=inps.length() ; i++){
            if(efb[i]!=0){
                cout<<i<<" "<<efb[i]<<'\n';
            }
        }

    }
}
