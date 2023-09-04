#include <bits/stdc++.h>
using namespace std;
void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int main(){
    fast();
    int n,m;
    cin >> n >> m;
    int a[101];
    int b[101];
    int bag[100001];
    int temp[100001];
    for(int i=1;i<=n;i++){
        cin >> a[i] >> b[i];
    }
    for(int i=1;i<=n;i++){
        memcpy(temp,bag,sizeof(temp));
        for(int j=0;j<=m;j++){
            if(j+a[i] <= m){
                temp[j+a[i]] = max(temp[j+a[i]],bag[j] + b[i]);
            }
        }
        for(int j=0;j<=m;j++){
            bag[j] = temp[j];
        }
    }
    cout << bag[m];
    return 0;
}
