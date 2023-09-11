#include <bits/stdc++.h>
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
    int dp[501][501];
    int a[501];
    int b[501];
    for(int i=0;i<n;i++){
        cin >> a[i] >> b[i];
    }
    for(int i=0;i<n;i++){
        dp[i][i] = 0;
    }
    for(int i=1;i<n;i++){
        for(int j=0;j<n-i;i++){
            dp[i][i+j] = INT_MAX;
            for(int k=i;j<i+j;k++){
                dp[i][i+j] = min(dp[i][i+j],dp[i][k] + dp[k+1][i+j] + a[i]*a[k+1]*b[i+j]);
            }
        }
    }
    cout << dp[0][n-1];
        return 0;
}
