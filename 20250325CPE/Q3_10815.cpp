//使用Java的考生請注意，最外層的類別(class)需命名為 main 。
//如果遇到超乎想像的狀況，請更改編譯器試看看!!各編譯器特性不同!! 主要原因是防毒軟體作祟。
//預設測資、隨機測資、固定測資是用來幫助除錯用的。批改時，只看暗中測資是否通過!!
//使用Python的考生請注意，請移除所有中文註解後才批改繳交。
#include<bits/stdc++.h>

using namespace std;

int main(){
	string input;
	string word;
	vector<string> str_list;
	while(getline(cin,input)){

		for(int i=0 ; i<input.size() ; i++){
			if(!isalpha(input[i]))input[i]=' ';
			input[i] = tolower(input[i]);
		}
		istringstream iss(input);
		while(iss>>word){
			if(find(str_list.begin(),str_list.end(),word)==str_list.end()) str_list.push_back(word);
		}
	}
	
	sort(str_list.begin(),str_list.end());

	for(auto it: str_list){
		cout<<it<<endl;
	}

}
