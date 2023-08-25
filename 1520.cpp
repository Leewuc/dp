#include <bits/stdc++.h>
using namespace std;
int n,m;
int dp[501][501];
int road[501][501];
int xx[4] = {1,0,-1,0};
int yy[4] = {0,1,0,-1};
void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int dfs(int x,int y){
    if(dp[x][y] != -1){
        return dp[x][y];
    }
    if(x < 0 || x>=n || y<0 || y>= m){
        return 0;
    }
    if(x == 0 && y == 0){
        return 1;
    }
    dp[x][y] = 0;
    for(int i=0;i<4;i++){
        if(road[x+xx[i]][y+yy[i]] > road[x][y]){
            dp[x][y] += dfs(x+xx[i],y+yy[i]);
        }
    }
    return dp[x][y];
}
int main(){
    fast();
    cin >> n >> m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> road[i][j];
        }
    }
    memset(dp,-1,sizeof(dp));
    cout << dfs(n-1,m-1);
    return 0;
}
