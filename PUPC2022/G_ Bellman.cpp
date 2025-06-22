#include<bits/stdc++.h>

using namespace std;

int main(){
    int N;
    cin >> N;
    int S;

    while(N--){
        cin >> S;
        vector<vector<int>> arr(S,vector<int>(S,0));
        vector<vector<int>> dp(S,vector<int>(S,INT_MAX));

        for(int i=0 ; i<S ; i++){
            for(int k=0 ; k<S ; k++){
                int num;
                cin >> num;
                arr[i][k] = num;
            }
        }
        dp[0][0] = arr[0][0];

        bool updated;
        for(int j=0 ; j<S*S ; j++){
            updated = false;
            for(int i=0 ; i<S ; i++){
                for(int k=0 ; k<S ; k++){
                    if(dp[i][k] == INT_MAX) continue;
                    if(i+1 < S && dp[i+1][k] > dp[i][k] + arr[i+1][k]){
                        dp[i+1][k] = dp[i][k] + arr[i+1][k];
                        updated = true;
                    }
                    if(k+1 < S && dp[i][k+1] > dp[i][k] + arr[i][k+1]){
                        dp[i][k+1] = dp[i][k] + arr[i][k+1];
                        updated = true;
                    }
                    if(i-1 >= 0 && dp[i-1][k] > dp[i][k] + arr[i-1][k]){
                        dp[i-1][k] = dp[i][k] + arr[i-1][k];
                        updated = true;
                    }
                    if(k-1 >= 0 && dp[i][k-1] > dp[i][k] + arr[i][k-1]){
                        dp[i][k-1] = dp[i][k] + arr[i][k-1];
                        updated = true;
                    }
                }
            }
            if(!updated) break;  // 如果沒有更新，提前結束
        }

        cout << dp[S-1][S-1] << endl;
    }
}
