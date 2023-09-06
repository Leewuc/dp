#include <bits/stdc++.h>
using namespace std;
void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int main(){
    fast();
    int dp[10001];
    dp[0] = 1;
    int n,m;
    cin >> n >> m;
    int v[101];
    for(int i=1;i<=n;i++){
        cin >> v[i];
    }
    
    for(int i=1;i<=n;i++){
       for(int j=v[i];j<=m;j++){
           dp[j] += dp[j-v[i]];
       }
   }
    cout << dp[m];
    return 0;
}
