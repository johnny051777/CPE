#include<bits/stdc++.h>

using namespace std;

int main(){
    string date;
    string st;
    int st2;
    vector<int> strs;
     
    cin>>date;
    stringstream iss(date);

    while(getline(iss, st , '-')){
        st2 = stoi(st);
        strs.push_back(st2);
    }

    if(strs[1]>=10){
        cout<<"TO LATE\n";
    }else if(strs[1]==9 && strs[2]>16){
        cout<<"TO LATE\n";
    }else{
        cout<<"GOOD\n";
    }
}
