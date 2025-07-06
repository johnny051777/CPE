#include<bits/stdc++.h>

using namespace std;

int main(){
    int T;
    cin>>T;
    int num;
    while(T--){
        cin>>num;

        if(num==0){
            cout<<6<<'\n';
        }else{
            cout<<(6+(365*3+366)*num)%7<<'\n';
        }
    }
}
