#include <bits/stdc++.h>
using namespace std;
void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
bool eng(pair<string,int> &x,pair<string,int> &y){
    if(x.second == y.second){
        if(x.first.length() == y.first.length()){
            return x.first < y.first;
        }
        return x.first.length() > y.first.length();
    }
    return x.second > y.second;
}
int main(){
    fast();
    int n,m;
    string s;
    unordered_map <string,int> un;
    cin >> n >> m;
    for(int i=0;i<n;i++){
        cin >> s;
        if(s.length() >= m){
            un[s]++;
        }
    }
    vector <pair<string,int>> v(un.begin(),un.end());
    sort(v.begin(),v.end(),eng);
    for(auto i : v){
        cout << i.first << '\n';
    }
    return 0;
}
