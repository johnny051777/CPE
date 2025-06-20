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
	int N;
	string bits;
	string ans;
	cin>>N;
	
	while(N--){
		cin>>bits;
		if(bits[0]=='0'){
			for(int i=1 ; i<bits.length();i++){
				ans="0";
			}
			for(int i=1 ; i<bits.length();i++){
				if(i%2!=0) ans[i] = bits[(bits.length()-1)-i]; //04030201 01020304
				if(i%2==0) ans[i] = bits[(bits.length()-1)-i+2]; 
				//1-7 2-8 3-5 4-6 5-3 6-4 
				//8-2 7-1 6-4 5-3 4-6 3-5 2-8 1-7 78563412 //21436587
			}
			for(int i=1 ; i<bits.length();i++){
				cout<<ans[i];
			}
		}else{
			for(int i=1 ; i<bits.length() ; i++){
				cout<<bits[i];
			}
		
		}
		
		cout<<endl;
	}

}
