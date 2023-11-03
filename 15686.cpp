#include <bits/stdc++.h>
using namespace std;
#define INF 987654321
int n,m;
vector<pair<int,int>> h,c;
int mapp[50][50];
int cnt;
bool visited[13];
void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int dtn(pair<int,int>r,pair<int,int>c){
    return abs(r.first - c.first) + abs(r.second - c.second);
}
void dfs(int a,int b){
    if(b == m){
        int rst = 0;
        int distance = INF;
        for(int i=0;i<h.size();i++){
            for(int j=0;j<c.size();j++){
                if(visited[j]){
                    distance = min(distance,dtn(h[i],c[j]));
                }
                rst += distance;
            }
        }
        cnt = min(cnt,rst);
        return ;
    }
    if(a == c.size()){
        return;
    }
    visited[a] = true;
    dfs(a+1,b+1);
    visited[a] = false;
    dfs(a+1,b);
}
int main(){
    fast();
    cin >> n >> m;
    for(int i=0;i<n;i++){
        for(int j=0;i<n;i++){
            cin >> mapp[i][j];
            if(mapp[i][j] == 1){
                h.push_back({i,j});
            }
            else if(mapp[i][j] == 2){
                c.push_back({i,j});
            }
        }
    }
    cnt = INF;
    dfs(0,0);
    cout << cnt << '\n';
    return 0;
}
