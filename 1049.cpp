#include <bits/stdc++.h>
using namespace std;
void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int main(){
    fast();
    int n,m;
    int x = 0;
    int y = 0;
    cin >> n >> m;
    vector<int> v(m);
    vector<int> aln(m);
    for(int i=0;i<m;i++){
        cin >> v[i] >> aln[i];
    }
    sort(v.begin(),v.end());
    sort(aln.begin(),aln.end());
    if(v[0] < aln[0] *6){
        x = n/6;
    }
    else{
        y = n*aln[0];
        cout << y <<'\n';
        return 0;
    }
    if(v[0] < (aln[0] * (n%6))){
        x += 1;
    }
    else{
        y = n%6;
    }
    cout << (x*v[0]) + (y*aln[0]) << '\n';
    return 0;
}
