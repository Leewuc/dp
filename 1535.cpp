#include <bits/stdc++.h>
using namespace std;
int n;
int m[21];
int k[21];
void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int hello(int a,int b,int c){
    int rst = 0;
    if(b <= 0){
        return 0;
    }
    if(a == n+1){
        return c;
    }
    rst = max(rst,hello(a+1,b-m[a],c+k[a]));
    rst = max(rst,hello(a+1,b,c));
    return rst;
}
int main(){
    fast();
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> m[i];
    }
    for(int i=1;i<=n;i++){
        cin >> k[i];
    }
    cout << hello(0,100,0);
    return 0;
}
