#include <bits/stdc++.h>
using namespace std;
void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int main(){
    fast();
    int n,m,h;
    int tmp,rst = 0;
    vector<int> v;
    cin >> n >> m >> h;
    for(int i=0;i < n-1;i++){
        cin >> tmp;
        v.push_back(tmp - h);
        h  = tmp;
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n-m;i++){
        rst += v[i];
    }
    cout << rst << '\n';
    return 0;
}
