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
    int cnt = 0;
    cin >> n;
    int *greed = new int[n];
    for(int i=0;i<n;i++){
        cin >> greed[i];
    }
    sort(greed,greed+n);
    for(int i=0;i<n;i++){
        cnt += (n-i) * greed[i];
    }
    cout << cnt;
    return 0;
}
