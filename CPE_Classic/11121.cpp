//使用Java的考生請注意，最外層的類別(class)需命名為 main 。
//如果遇到超乎想像的狀況，請更改編譯器試看看!! 各編譯器特性不同!!
//預設測資、隨機測資、固定測資是用來幫助除錯用的。批改時，只看暗中測資是否通過!!
//使用Python的考生請注意，請移除所有中文註解後才批改繳交。
#include<bits/stdc++.h>

using namespace std;

int main(){
	string ans;
	int N;
	int inps;
	cin>>N;
	for(int i=1 ; i<=N ; i++){
		cin>>inps;
		while(inps!=0){
			if(inps%(-2)==0){
				ans+='0';
			}else{
			 ans+='1';
			}
			//cout<<inps<<endl;
			int temp = inps;
			inps/=-2;
			if((temp-inps*(-2))%-2==-1){
				inps++;
			}
			
		}
		if(ans.empty()) ans="0";
		cout<<"Case #"<<i<<": ";
		for(int k=ans.size()-1 ; k>=0 ; k--){
			cout<<ans[k];
		}
		cout<<endl;
		ans="";
	}
}

// 7
/*
 7/-2= -3..1
 -3/-2= 1..1
 2/-2= -1..0
 -1/-2= 0..-1
 1/-2= 0..1
 
*/
