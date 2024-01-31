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
    int cnt = 0;
    vector<stack<int>> v(7);
    int a,b;
    cin >> n >> m;
    for(int i=0;i<n;i++){
        cin >> a >> b;
        while(!v[a].empty() && v[a].top() > b){
            v[a].pop();
            cnt++;
        }
        if(!v[a].empty() && v[a].top() == b){
            continue;
        }
        v[a].push(b);
        cnt++;
    }
    cout << cnt;
    return 0;
}
