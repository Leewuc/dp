#include <iostream>
using namespace std;
void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int main(){
    fast();
    int n,m;
    int dp[3][10001];
    dp[0][1] = 1;
    dp[0][2] = 1;
    dp[0][3] = 2;
    dp[1][2] = 1;
    dp[2][3] = 1;
    for(int i=4;i<=10000;i++){
        dp[0][i] = (dp[0][i-1]+dp[1][i-1]+dp[2][i-1]);
        dp[1][i]=(dp[1][i-2]+dp[2][i-2]);
        dp[2][i] = dp[2][i-3];
    }
    cin >> n;
    while(n--){
        cin >> m;
        cout << dp[0][m]+dp[1][m]+dp[2][m] << '\n';
    }
    return 0;
}
