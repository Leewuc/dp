#include <iostream>
#include <algorithm>
using namespace std;
void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}
int main(){
    fast();
    int n,m;
    int sens[10000];
    cin >> n >> m;
    for(int i=0;i<n;i++){
        cin >> sens[i];
    }
    sort(sens,sens+n);
    int cnt = sens[n-1] - sens[0];
    for(int i=1;i<n;i++){
        sens[i-1] = sens[i] - sens[i-1];
    }
    sort(sens,sens+n-1);
    for(int i= n-2;i >= n-m && i >= 0; i--){
        cnt -= sens[i];
    }
    cout << cnt;
    return 0;
}
