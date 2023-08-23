#include <iostream>
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
    int dp[1001];
    int arr[1001];
    int cnt = 0;
    for(int i=1;i<=n;i++){
        cin >> arr[i];
    }
    for(int i=1;i<=n;i++){
        for(int j=0;j<=i;j++){
            if(arr[i] > arr[j] && dp[i] <= dp[j]){
                dp[i] = dp[j]+1;
                if(dp[i] > cnt){
                    cnt = dp[i];
                }
            }
        }
    }
    cout << cnt;
    return 0;
}
