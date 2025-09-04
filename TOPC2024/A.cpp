#include<bits/stdc++.h>

using namespace std;

int main(){
	long long int T;
	string animal;
	int power;
	long long int max= 0;
	long long int max_spe= 0;
	long long int max2=0;
	cin>>T;
	vector<string> a_list;
	vector<long long int> p_list;
	while(T--){
		cin>>animal>>power;
		a_list.push_back(animal);
		p_list.push_back(power);
	}
	
	for(int i=0 ; i<a_list.size() ; i++){
		if(a_list[i]=="pig"){
			if(p_list[i]>max){
				max = p_list[i];
				max_spe = i;
			}
		}
	}
	//cout<<max<<'\n';
	max2 += max;
	
	for(int i=0 ; i<p_list.size() ; i++){
		//
		if(p_list[i] < max && a_list[i]!="pig"){
			max2 += p_list[i];
			
		}
		
	}
	
	cout<<max2;
} 
