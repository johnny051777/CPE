# PUPC22-G

## Dijkstra演算法

### STEP1. 初始化

`priority_queue`容器: 設定greater(最小的cost開始pop)，利用pair<>來記錄cost,x的位置,y的位置
```cpp=
// PP => {cost,{x,y}}
typedef pair<int,pair<int,int>> PP;
priority_queue<PP,vector<PP>,greater<PP>> pq;
```

`cost`容器: 利用vector存，表示目前cost值

先將<font color="red">map[0][0]的cost</font>以及<font color="yellow">x,y位置</font>來push進priority_queue容器裡。

### STEP2. 擴張

將priority_queue中pop一個pair數值，利用其數值來上下左右擴張。

- 檢查路徑是否為最佳路徑?
如果priority_queue被pop出來的值小於cost容器中的值則跳過。

- 開始擴張
根據pop出來的x,y位置上下左右擴張，將被擴張過的位置push進priority_queue，並且根據map[x][y]成本更新cost

### STEP3. 印出結果

將cost[n-1][n-1]的位置印出來


### 小提醒

- 讓I/O跑得快
```cpp=
ios::sync_with_stdio(false);
cin.tie(nullptr);
```
這東東記得加，否則可能因為測資過於龐大而WA
