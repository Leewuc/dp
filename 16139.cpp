#include <bits/stdc++.h>
using namespace std;
void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int main(){
    fast();
    int dp[26][200001];
    string str,str1;
    int n,m,k;
    cin >> str;
    for(int i=str.size()-1;i>=0;i--){
        for(int j=0;j<26;j++){
            dp[j][i] = dp[j][i+1];
            if(j==(str.at(i)-'a')){
                dp[j][i]++;
            }
        }
    }
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> str1 >> m >> k;
        cout << dp[str1-'a'][m] - dp[str1-'a'][k+1] << '\n';
    }
    return 0;
}
