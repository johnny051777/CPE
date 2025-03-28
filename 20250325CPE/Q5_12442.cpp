//使用Java的考生請注意，最外層的類別(class)需命名為 main 。
//如果遇到超乎想像的狀況，請更改編譯器試看看!!各編譯器特性不同!! 主要原因是防毒軟體作祟。
//預設測資、隨機測資、固定測資是用來幫助除錯用的。批改時，只看暗中測資是否通過!!
//使用Python的考生請注意，請移除所有中文註解後才批改繳交。
#include<bits/stdc++.h>

using namespace std;

int dfs(int n,vector<int> &graph ,int s ,vector<bool> &go_graph,int ans){
	
	if(go_graph[n] || graph[n]==-1) {
		return ans;
	}
	
	go_graph[n] = true;
	dfs(graph[n],graph,s,go_graph,ans+1);
	
	
	

}

int main(){
	int T;
	int cases=0;
	int s;
	
	
	int a,b;
	int ans;
	int max = 0;
	
	cin>>T;
	while(T--){
		cases++;
		cin>>s;
		vector<int> graph(s+1,-1); 
		
		for(int i=0 ; i<s ; i++){
			cin>>a>>b;
			graph[a]=b;
		}
		
		for(int i=0 ; i<=s ; i++){
			vector<bool> go_graph(s,false);
			int temp = dfs(i,graph,s,go_graph,0);
		//	cout<<temp<<endl;
			if(temp>max){
				max= temp;
				ans = i;
			}
		}
		
		printf("Case %d: %d\n",cases,ans);
	//	cout<<max<<endl;

		ans=0;
		max=0;
		
	}
}
