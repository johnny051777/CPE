#include<bits/stdc++.h>

using namespace std;

int ans=0;
int firstcall=0;

void dfs(vector<vector<int>> &arr, int i,int k){
	arr[i][k]=1;
	if(k+1<=arr[0].size()-1 && arr[i][k+1]==0){ arr[i][k+1]=1; dfs(arr, i,k+1);} 
	if( k-1>=0 &&arr[i][k-1]==0 ){  arr[i][k-1]=1; dfs(arr, i,k-1);} 
	if( i+1<=arr.size()-1 && arr[i+1][k]==0){arr[i+1][k]=1; dfs(arr, i+1,k); }
	if(i-1>=0 &&arr[i-1][k]==0 ){ arr[i-1][k]=1 ; dfs(arr, i-1,k); }
	
	if(i+1<=arr.size()-1 && k+1<=arr[0].size()-1 && arr[i+1][k+1]==0){ arr[i+1][k+1]=1; dfs(arr, i+1,k+1); }
	if(i+1<=arr.size()-1 && k-1>=0 && arr[i+1][k-1]==0){ arr[i+1][k-1]=1; dfs(arr, i+1,k-1);} 
	if( i-1>=0 && k+1<=arr[0].size()-1 && arr[i-1][k+1]==0){arr[i-1][k+1]=1; dfs(arr, i-1,k+1); }
	if(i-1>=0 && k-1>=0 && arr[i-1][k-1]==0 ) {arr[i-1][k-1]=1 ; dfs(arr, i-1,k-1); }
	
}

int cal_p(vector<vector<int>> &arr2, int i,int k){
	
	if(k+1<=arr2[0].size()-1 && arr2[i][k+1]==1){ ans++;} 
	if( k-1>=0 && arr2[i][k-1]==1 ){  ans++;} 
	if( i+1<=arr2.size()-1 && arr2[i+1][k]==1){ ans++;}
	if(i-1>=0 &&arr2[i-1][k]==1 ){  ans++; }
	
	if(k+1>arr2[0].size()-1){ans++;}
	if( k-1<0){ans++;}
	if( i+1>arr2.size()-1){ans++;}
	if(i-1<0){ans++;}

}

int main(){
	/*記得要加，不然瘋狂程設抱錯zz*/
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	int a,b;
	int num;
	int count=0;
	
	cin>>N;
	while(N--){
		
		cin>>a>>b;
		vector<vector<int>> arr(a,vector<int>(b));
		vector<vector<int>> arr2(a,vector<int>(b));
		for(int i=0 ; i<a;i++){
			for(int k=0 ; k<b; k++){
				cin>>num;
				arr[i][k] = num;
				arr2[i][k] = num;
			}
		}
		
		for(int i=0 ; i<a;i++){
			for(int k=0 ; k<b; k++){
				if(arr[i][k]==0){
					dfs(arr,i,k);
					count++;
				}
				if(arr2[i][k]==0){
					cal_p(arr2,i,k);
				}
			}
		}
		
		cout<<count<<" "<<ans<<endl;
		count=0;
		ans=0;
		
	}
	
}
