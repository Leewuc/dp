#include <bits/stdc++.h>
using namespace std;
void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int triangle(vector<int> &v){
    for(int i=v.size()-1;i>1;i++){
        if(v[i] < v[i-1]+v[i-2]){
            return v[i]+v[i-1]+v[i-2];
        }
    }
    return -1;
}
int main(){
    fast();
    int n;
    cin >> n;
    vector<int> v(n,0);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    cout << triangle(v) << '\n';
    return 0;
}
