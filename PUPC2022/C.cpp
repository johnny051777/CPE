//
//
//   題目以紙本為準，系統內題目若有跑版或亂碼，應參酌紙本題目。
//
//
//使用Java的考生請注意，最外層的類別(class)需命名為 main 。
//如果遇到超乎想像的狀況，請更改編譯器試看看!! 各編譯器特性不同!!
//預設測資、隨機測資、固定測資是用來幫助除錯用的。批改時，只看暗中測資是否通過!!
#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	int temp;
	cin>>n;
	cin.ignore();
	
	while(n--){
		string a;
		vector<int> s(0);
		
		int num;
		getline(cin,a);
		
		istringstream iss(a);
		
		while(iss>>num){
			s.push_back(num);
		}
		
		vector<int> new_s(s.size(),0);
		
		for(int i=0 ; i<s.size()-1 ; i++){
			for(int k=0 ; k<s.size()-1 ; k++){
				if(s[k]<s[k+1]){
					temp = s[k];
					s[k] = s[k+1];
					s[k+1] = temp;
				}
			}
		}
		

		for(int i=0 ; i<s.size() ; i++){
			if(i%2==0){
				new_s[i/2] = s[i];
			}else{
				new_s[s.size()-1-(i/2)] = s[i];
			}
			
		}
		
		for(int i=0 ; i<s.size() ; i++){
		
			cout<<new_s[i];
			if(i!=s.size()-1 && i%30!=29)cout<<" ";
			if(i%30==29)cout<<endl;
			
		}
		
		cout<<endl;
		
		
	}

}
