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
    string s;
    int cnt = 0;
    cin >> n;
    map<string,int> m;
    while(n--){
        cin >> s;
        m[s]++;
    }
    for(auto i=m.begin(); i != m.end();i++){
        cnt = max(cnt,i->second);
        if(cnt == i->second){
            cout << i -> first;
        }
    }
    return 0;
}
