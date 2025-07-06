/* 有點字串處理 */
#include<bits/stdc++.h>
#include<string>

using namespace std;

int main(){
    int T;
    int index=0;
    string inps1;
    string inps2;
    cin>>T;
    map<string,string> m;
    while(T--){
        cin>>inps1;
        string temp="";
        m.clear();

        for(auto c:inps1){
            if(c=='0'||c=='1'){
                
                temp += c;
            }else{
                m[temp] = c;
                if(temp.back()=='0'){
                    temp.pop_back();
                }else{
                    while(temp.back()!='0' ){
                        if(!temp.empty()) {
                            temp.pop_back();
                        }else{ 
                            break;
                        }
                    }
                   if(!temp.empty())temp.pop_back();
                }
            }    
        }

        cin>>inps2;
        temp="";
        string ans="";
        for(auto c:inps2){
            temp += c;
            if(m[temp]!=""){
                ans += m[temp];
                temp="";
            }
        }

        cout<<ans<<'\n';
    }
}
