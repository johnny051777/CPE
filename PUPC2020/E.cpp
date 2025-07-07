#include<bits/stdc++.h>
#include<map>

using namespace std;

int main(){
    string inps;
    

    while(1){
        int first_comma = 0;
        int min = INT_MAX;
        unordered_map<char,int> pp;
        vector<char> order;
        cin>>inps;

        if(inps.length()==1){
            break;
        }

        for(int i=0 ; i<inps.length()-1 ; i++){
            if(find(order.begin(),order.end(),inps[i])==order.end()){
                order.push_back(inps[i]);
            }
            pp[inps[i]]++;     
        }
/*
        for(auto p:pp){
            cout<<p.first<<" "<<p.second<<'\n';
        }
*/
        for(auto p: pp){
            if(p.second<min){
                min = p.second;
            }
        }

        for(int i=0 ; i<order.size() ; i++){
            
            if(pp[order[i]]==min){
                if(first_comma==1) cout<<" ";
                cout<<order[i];
                first_comma = 1;
            }
        }
        cout<<'\n';
        //pp.clear();

    }
}
