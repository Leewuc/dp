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
    map <string,int> mm;
    string n1,n2;
    int rst = 1;
    cin >> m;
    while(m--){
        cin >> n;
        for(int i=0;i<n;i++){
            cin >> n1 >> n2;
            if(mm.find(n2) == mm.end()){
                mm.insert({n2,1});
            }
            else{
                mm[n2]++;
            }
        }
        for(auto i : mm){
            rst *= i.second+1;
        }
        rst -= 1;
        cout << rst << '\n';
    }
    return 0;
}
