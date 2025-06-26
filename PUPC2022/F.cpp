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
	/*記得加，否則瘋狂澄社不通過*/
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int N;
	cin>>N;
	
	int count=0;
	string inps;
	
	while(N--){
		vector<int> a(500,0);
		cin>>inps;
		for(int i=0 ; i<inps.length() ; i++){
			inps[i] = toupper(inps[i]);
		}
		for(int i=0 ; i<inps.length() ; i++){
			if(a[inps[i]]==0){
				count++;
				a[inps[i]]=1;
			}
		}
		
		if(count%3==0)cout<<"INSTANT COFFEE!"<<endl;
		if(count%3==2)cout<<"HANGING EAR!"<<endl;
		if(count%3==1)cout<<"AMERICANO COFFEE!"<<endl;
		count = 0;
	}
}
