#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int main(){
    fast();
    int n,m;
    cin >> n;
    vector<int> v;
    for(int i=0;i<n;i++){
        cin >> m;
        v.push_back(m);
    }
    sort(v.begin(),v.end());
    v.erase(unique(v.begin(),v.end()),v.end());
    for(auto k: v){
        cout << k <<" ";
    }
    cout << '\n';
    return 0;
}
