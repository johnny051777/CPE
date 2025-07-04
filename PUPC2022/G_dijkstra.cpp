#include<bits/stdc++.h>


using namespace std;

typedef pair<int,pair<int,int>> PP;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    int n;
    int dir_x[4] = {1,-1,0,0};
    int dir_y[4] = {0,0,1,-1};
    int num;
    cin>>T;

    while(T--){
        cin>>n;
        map<int,map<int,int>> m;
        for(int i=0 ; i<n ; i++){
            for(int k=0 ; k<n ; k++){
                cin>>num;
                m[i][k] = num;
            }
        }

        // PP => {cost,{x,y}}
        priority_queue<PP,vector<PP>,greater<PP>> pq;
        vector<vector<int>> cost(n,vector<int>(n,INT_MAX)); 
        pq.push({m[0][0],{0,0}}); //{m[y][x],{x,y}}
        cost[0][0] = m[0][0];

        while(!pq.empty()){
            PP top = pq.top();
            pq.pop();

            int cur_cost = top.first;
            int cur_x = top.second.first;
            int cur_y = top.second.second;

            if(cur_cost > cost[cur_y][cur_x]) continue;

            for(int i=0 ; i<4 ; i++){
                int next_x = cur_x + dir_x[i];
                int next_y = cur_y + dir_y[i];

                if(next_x>=0 && next_x<n && next_y>=0 && next_y<n){
                    int newcost = cur_cost + m[next_y][next_x];
                    if(newcost < cost[next_y][next_x]){
                        cost[next_y][next_x] = newcost;
                        pq.push({newcost,{next_x,next_y}});
                    }
                }
            }
        }

        cout<<cost[n-1][n-1]<<'\n';


    }
}
