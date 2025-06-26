//使用Java的考生請注意，最外層的類別(class)需命名為 main 。
//如果遇到超乎想像的狀況，請更改編譯器試看看!! 各編譯器特性不同!!
//預設測資、隨機測資、固定測資是用來幫助除錯用的。批改時，只看暗中測資是否通過!!
//使用Python的考生請注意，請移除所有中文註解後才批改繳交。
//若紙本題目與系統題目在排版上有衝突時，以紙本題目為準。
//若題文描述與系統輸出有衝突時，以系統為準。
#include<bits/stdc++.h>

using namespace std;

void dfs(vector<vector<int>> &arr, int i,int k){
	arr[i][k]=1;
	if(k+1<=arr[0].size()-1 && arr[i][k+1]==0) arr[i][k+1]=1; dfs(arr, i,k+1); 
	if( k-1>=0 &&arr[i][k-1]==0 ) dfs(arr, i,k-1); arr[i][k-1]=1; dfs(arr, i,k-1); 
	if( i+1<=arr.size() && arr[i+1][k]==0)arr[i+1][k]=1; dfs(arr, i+1,k); 
	if(i-1>=0 &&arr[i-1][k]==0 ) arr[i-1][k]=1 ; dfs(arr, i-1,k); 
	
	if(i+1<=arr.size() && k+1<=arr[0].size()-1 && arr[i+1][k+1]==0) arr[i+1][k+1]=1; dfs(arr, i+1,k+1); 
	if(i+1<=arr.size() && k-1>=0 && arr[i+1][k-1]==0) dfs(arr, i,k-1); arr[i+1][k-1]=1; dfs(arr, i+1,k-1); 
	if( i-1>=0 && k+1<=arr[0].size()-1 && arr[i-1][k+1]==0)arr[i-1][k+1]=1; dfs(arr, i-1,k+1); 
	if(i-1>=0 && k-1>=0 && arr[i-1][k-1]==0 ) arr[i-1][k-1]=1 ; dfs(arr, i-1,k-1); 
	
}

int main(){
	int N;
	int a,b;
	int num;
	int count=0;
	cin>>N;
	while(N--){
		
		cin>>a>>b;
		vector<vector<int>> arr(a,vector<int>(b));
		for(int i=0 ; i<a;i++){
			for(int k=0 ; k<b; k++){
				cin>>num;
				arr[i][k] = num;
			}
		}
		
		for(int i=0 ; i<a;i++){
			for(int k=0 ; k<b; k++){
				if(arr[i][k]==0){
					dfs(arr,i,k);
					count++;
				}
			}
		}
		
		cout<<count<<endl;
		
	}
	
}
