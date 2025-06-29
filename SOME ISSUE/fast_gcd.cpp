// 輾轉相除法 --> 求gcd
#include<bits/stdc++.h>

using namespace std;

int gcd(int a,int b){
    if(a>b){
        if(a%b==0){
            return b;
        }else{
            return gcd(b,a%b);
        }
    }else{
        if(b%a==0){
            return a;
        }else{
            return gcd(a,b%a);
        }
    }

}

int main(){
    int a,b;
    cin>>a>>b;
    cout<<gcd(a,b);

}