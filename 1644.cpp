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
    vector<int> v;
    bool prime[4000001];
    int sum = 0;
    int res = 0;
    int a = 0;
    int b = 0;
    for(int i=2;i<=n;i++){
        if(!prime[i]){
            v.push_back(i);
            for(int j=1;j*i<=n;j++){
                prime[i*j] = true;
            }
        }
    }
    while(a <= b){
        if(sum > n){
            sum -= v[a++];
        }
        else if(sum < n){
            if(b >= v.size()){
                break;
            }
            sum+= v[b++];
        }
        else{
            res++;
            if(b >= v.size()){
                break;
            }
            sum += v[b++];
        }
    }
    cout << res << '\n';
    return 0;
}
