#include <bits/stdc++.h>
using namespace std;
int n;
void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
bool check(int m){
    for(int i=2;i<=sqrt(m);i++){
        if(m%i == 0){
            return false;
        }
    }
    return true;
}
void dfs(int m){
    if(to_string(m).size() == n){
        cout << m << '\n';
        return;
    }
    for(int i=0;i<=9;i++){
        string s = to_string(m) + to_string(i);
        int a = stoi(s);
        if(check(a) == 1){
            dfs(a);
        }
    }
}
int main(){
    fast();
    cin >> n;
    for(int i=2;i<10;i++){
        if(check(i) == 1){
            dfs(i);
        }
    }
    return 0;
}
