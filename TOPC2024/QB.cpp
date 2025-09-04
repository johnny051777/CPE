#include<bits/stdc++.h>

using namespace std;

int main(){
	long long int T;
	long long int n;
	long long int max=0;
	long long int max_index=0;
	long long int valid=0;
	long long int sum=0;
	vector<long long int> pos;
	cin>>T;
	while(T--){
		cin>>n;
		pos.push_back(n);
	}
	
	for(int i=0 ; i<pos.size() ; i++){
		if(max<pos[i]){
			max = pos[i];
			max_index = i;
			valid = 1;
		}
	}
	
	for(int i=0 ; i<pos.size() ; i++){
		if(i==max_index &&valid==1){
			sum += pos[i]*2;
		}else if(pos[i]<0){
			sum -= pos[i];
		}else{
			sum += pos[i];
		}
	}
	
	cout<<sum<<'\n';
}
