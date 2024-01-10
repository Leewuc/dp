#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
bool cmp(pair<int,int>& x,pair<int,int> &y){
    return x.second < y.second;
}
int main(){
    fast();
    vector<pair<int,int>> v(8);
    int s = 0;
    for(int i=0;i<8;i++){
        cin >> v[i].first;
        v[i].second = i;
    }
    sort(v.begin(),v.end());
    for(int i=3;i<8;i++){
        s += v[i].first;
    }
    sort(v.begin()+3,v.end(),cmp);
    cout << s <<'\n';
    for(int i=3;i<8;i++){
        cout << v[i].second+1 << ' ';
    }
    return 0;
}
