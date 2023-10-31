#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int n;
int map[26][26];
vector <int> v;
int cnt = 0;
int x[] = {1,-1,0,0};
int y[] = {0,0,1,-1};
void dfs(int dx, int dy){
    for(int i=0;i<4;i++){
        int nx = dx+x[i];
        int ny = dy+y[i];
        if(nx < 0 || nx >= n || ny <0 || ny >= n){
            continue;
        }
        if(map[nx][ny] == 1){
            cnt++;
            map[nx][ny] = 2;
            dfs(nx,ny);
        }
    }
}
int main(){
    fast();
    cin >> n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> map[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
             if(map[i][j] == 1){
                cnt = 1;
                map[i][j] = 2;
                dfs(i,j);
                v.push_back(cnt);
        }
    }
    }
    cout << v.size() << '\n';
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout << v[i] << '\n';
    }
    return 0;
}
