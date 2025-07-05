#include<bits/stdc++.h>
#include<map>
#include<string>

using namespace std;

int main(){
    int T;
    int stop=0;
    string inps="";
    string uid="";
    string uid2="";
    string uid2_2="        ";
    map<string,string> m;
    cin>>T;
    while(T--){
        cin>>inps;
        //切割,字串
        for(char c : inps){
            if(c==',') stop=1;
            if(stop==0) uid+=c;
            if(stop==1 && c!=',') uid2+=c;
        }

        //Hex移位
        for(int i=0 ; i<uid2.length() ; i++){
            if(i%2==0){
                uid2_2[uid2.length()-1-i-1] = uid2[i];
            }else{
                uid2_2[uid2.length()-i] = uid2[i];
            }
        }
        //cout<<uid2_2<<'\n';
        
        //16進位轉10進位
        unsigned long long uid2_3;
        stringstream iss;
        iss<<hex<<uid2_2;
        iss>>uid2_3;

        //補零機制
        string str = to_string(uid2_3);
        string str2="";
        for(int i=0 ; i<10-str.length() ;i++){
            str2+="0";
        }
        str2 += str;
        
        //放入map裡
        m[str2] = uid ;

        uid="";uid2="";uid2_2="        ";stop=0;
    }
/*
    for(auto c : m){
        cout<<c.first<<" "<<c.second<<'\n';
    }
*/
    cin>>T;
    string a;
    while(T--){
        cin>>a;
        //查表
        if(!m[a].empty()){
            cout<<m[a]<<'\n';
        }else{
            cout<<"X"<<'\n';
        }
    }

    
    
}
