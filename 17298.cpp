#include <iostream>
#include <stack>
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
    stack <int>s;
    int ans[1000001];
    int cnt[1000001];
    for(int i=0;i<n;i++){
        cin >> cnt[i];
    }
    for(int i=n-1;i>=0;i--){
        while(!s.empty() && s.top() <= cnt[i]){
            s.pop();
        }
        if(s.empty()){
            ans[i] = -1;
        }
        else{
            ans[i] = s.top();
        }
        s.push(cnt[i]);
    }
    for(int i=0;i<n;i++){
        cout << ans[i] << ' ';
    }
    return 0;
}
