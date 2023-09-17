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
    int cnt[51] = {0};
    string frid[51];
    for(int i=0;i<n;i++){
        cin >> frid[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                continue;
            }
            if(frid[i][j] == 'Y'){
                cnt[i]++;
            }
            else if(frid[i][j] == 'N'){
                for(int k=0;k<n;k++){
                    if((frid[i][k] == 'Y') && (frid[j][k]) == 'Y'){
                        cnt[i]++;
                        break;
                    }
                }
            }
        }
    }
    cout << *max_element(cnt,cnt+n) << '\n';
    return 0;
}
