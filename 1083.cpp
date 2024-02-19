#include <bits/stdc++.h>
using namespace std;
vector<int> v;
void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
void ssort(int a,int b){
    int mm = min(b+1,a);
    int n = 0;
    int m = 0;
    int k = 0;
    int tmp;
    for(int i=0;i<a && b > 0; i++){
        for(int j=n;j<mm && mm <= a; j++){
            if(m < v[i]){
                m = v[i];
                k = j;
            }
        }
        for(int j=k;k>=n+1 && b >0;j--,b--){
            tmp = m;
            v[j] = v[j-1];
            v[j-1] = tmp;
        }
        n++;
        mm = min(b+n+1,a);
        m = 0;
    }
}
int main(){
    fast();
    int n,m,k;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> m;
        v.push_back(m);
    }
    cin >> k;
    ssort(n,k);
    for(int i=0;i<v.size();i++){
        cout << v[i] << ' ';
    }
    return 0;
}
