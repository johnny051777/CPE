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

int dfs(vector<vector<int>> &arr, int i, int k, int Size_arr, int ans,vector<vector<bool>> &arr_go){
	int min_ans = INT_MAX;
	
	if(i==Size_arr-1 && k== Size_arr-1){
		return ans+arr[i][k];
	}
	
	arr_go[i][k] = true;

	if(i+1<Size_arr && !arr_go[i+1][k]) min_ans =min(min_ans, dfs(arr,i+1,k,Size_arr,ans+arr[i][k],arr_go));
	if(k+1<Size_arr && !arr_go[i][k+1]) min_ans = min(min_ans, dfs(arr,i,k+1,Size_arr,ans+arr[i][k],arr_go));
	if(i-1>=0&& !arr_go[i-1][k]) min_ans = min(min_ans,dfs(arr,i-1,k,Size_arr,ans+arr[i][k],arr_go));
	if(k-1>=0&& !arr_go[i][k-1]) min_ans = min(min_ans,dfs(arr,i,k-1,Size_arr,ans+arr[i][k],arr_go));
	
	arr_go[i][k] = false;
	
	return min_ans;
	

}

int main(){
	int N;
	int Size_arr;
	int num;
	cin>>N;
	
	while(N--){
		
		cin>>Size_arr;
		vector<vector<int>> arr(Size_arr,vector<int>(Size_arr,0));
		vector<vector<bool>> arr_go(Size_arr,vector<bool>(Size_arr,false));
		for(int i=0 ; i<Size_arr ; i++){
			for(int k=0 ; k<Size_arr ; k++){
				cin>>num;
				arr[i][k] = num;	
			}
		}
		
		cout<<dfs(arr,0,0,Size_arr,0,arr_go)<<endl;
	}
	
	
}
