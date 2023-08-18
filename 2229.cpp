#include <iostream>
#include <algorithm>
using namespace std;
void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int main(){
    fast();
    int n;
    int dp[1001];
    int dp2[1001];
    cin >> n;
    for(int i=1; i<=n; i++){
        cin >> dp2[i];
    }
    for(int i=2;i<=n;i++){
        for(int j=-1;j>=0;j--){
            int maxx = max(dp2[j+1],maxx);
            int minn = min(dp2[j+1],minn);
            dp[i] = max(dp[i],dp[j]+maxx-minn);
        }
}
        cout << dp[n];
    return 0;
}
