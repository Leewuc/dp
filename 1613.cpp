#include <iostream>
using namespace std;
#define INF 987654321
#define MAX 401
int n,m,k;
int map[MAX][MAX];
void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
void history(){
    for(int i = 1;i<=n;i++){
        for(int j=1;i<=n;j++){
            for(int k=1;k<=n;k++){
                if(map[j][k] > map[j][i] + map[i][k]){
                    map[j][k] = map[j][i] + map[i][k];
                }
            }
        }
    }
}
int main(){
    fast();
    cin >> n >> k;
    int a,b;
    int x,y;
    int cnt[50001];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            map[i][j] = INF;
        }
    }
    for(int i=0;i<k;i++){
        cin >> a >> b;
        map[a][b] = 1;
    }
    history();
    cin >> m;
    for(int i=0;i<m;i++){
        cin >> x >> y;
        if(map[x][y] == INF && map[y][x] == INF){
            cnt[i] = 0;
        }
        else if(map[x][y] != INF){
            cnt[i] = -1;
        }
        else if(map[y][x] != INF){
            cnt[i] = 1;
        }
    }
    for(int i=0;i<m;i++){
        cout << cnt[i] << '\n';
    }
    return 0;
}
