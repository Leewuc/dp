#include <bits/stdc++.h>
using namespace std;
void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
int main(){
    fast();
    int n,m,k,l;
    cin >> n >> m;
    vector<int> x,y,cnt;
    for(int i=0;i<n;i++){
        cin >> k;
        x.push_back(k);
    }
    for(int i=0;i<m;i++){
        cin >> l;
        y.push_back(l);
    }
    sort(x.begin(),x.end());
    sort(y.begin(),y.end());
    for(int i=0;i<x.size();i++){
        int left = 0;
        int right = y.size()-1;
        bool ab = false;
        while(left <= right){
            int mid = (left+right) / 2;
            if(y[mid] == x[i]){
                ab = true;
                break;
            }
            if(x[i] < y[mid]){
                right = mid - 1;
            }
            else if(x[i] > y[mid]){
                left = mid + 1;
            }
        }
        if(!ab){
            cnt.push_back(x[i]);
        }
    }
    cout << cnt.size() << '\n';
    for(int i=0;i<cnt.size();i++){
        cout << cnt[i] << ' ';
    }
    return 0;
}
