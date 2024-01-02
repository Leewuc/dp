#include <iostream>
#include <vector>
using namespace std;
void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int main(){
    fast();
    int n;
    cin >> n;
    vector<vector<int>> zoo(n+1,vector<int>(4,0));
    zoo[1][0] = 1;
    zoo[1][1] = 1;
    zoo[1][2] = 1;
    for(int i=2;i<=n;i++){
        zoo[i][0] = (zoo[i-1][0]+zoo[i-1][1]+zoo[i-1][2])%9901;
        zoo[i][1] = (zoo[i-1][0]+zoo[i-1][2]%9901);
        zoo[i][2] = (zoo[i-1][0]+zoo[i-1][1]%9901);
    }
    cout << (zoo[n][0]+zoo[n][1]+zoo[n][2])%9901;
    return 0;
}
