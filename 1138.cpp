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
    cin >> n;
    vector<int> v(n+1);
    for(int i=1;i<=n;i++){
        cin >> v[i];
    }
    vector<int> v1;
    v1.push_back(n);
    for(int i=n-1;i>=1;i++){
        v1.insert(v1.begin()+v[i],i);
    }
    for(int i=0;i<v1.size();i++){
        cout << v[i] << " ";
    }
    return 0;
}
