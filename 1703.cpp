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
    while(1){
        int n;
        int root = 1;
        cin >> n;
        vector <int> v;
        if(!n){
            break;
            }
        v.resize(n*2);
        for(int i=0;i<2*n;i++){
            cin >> v[i];
        }
        for(int i=0;i<n;i++){
            root = root * v[i*2] - v[i*2+1];
        }
        cout << root << '\n';
    }
    return 0;
}
