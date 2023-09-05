#include <bits/stdc++.h>
using namespace std;
priority_queue <int,vector<int>,greater<int>> p;
void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int main(){
    fast();
    int n;
    cin >> n;
    int cnt = 0;
    while(n--){
        cin >> cnt;
        if(cnt == 0){
            if(p.empty()){
                cout << 0 << '\n';
                continue;
            }
            cout << p.top() << '\n';
            p.pop();
        }
        else{
            p.push(cnt);
        }
    }
    return 0;
}
