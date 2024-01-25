#include <bits/stdc++.h>
using namespace std;
void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
string ant(int n){
    string aant;
    while(n--){
        aant += "--";
    }
    return aant;
}
int main(){
    fast();
    int n,m;
    string s;
    vector<string> v[1001];
    vector<string> v1;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> m;
        while(m--){
            cin >> s;
            v1.push_back(s);
        }
        v[i] = v1;
    }
    sort(v,v+n);
    for(int i=0;i<n;i++){
        int k=0;
        if(i != 0){
            for(int j=0;j<v[i].size() && j < v[i-1].size();j++){
                if(v[i][j] == v[i-1][j]){
                    k++;
                }
            }
        }
        for(int j=k;j<v[i].size();j++){
            cout << ant(j) + v[i][j] << '\n';
        }
    }
    return 0;
}
