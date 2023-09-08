#include <bits/stdc++.h>
using namespace std;
int n;
int mmax,mmin;
int num[11];
bool inp = false;
void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
void dfs(int i,int r,int add, int sub,int mul,int div){
    if(i==n){
        if(inp == false){
            inp = true;
            mmax = r;
            mmin = r;
        }
        else if(mmax < r){
            mmax = r;
        }
        else if(mmin > r){
            mmin = r;
        }
        else{
            if(add > 0){
                dfs(i+1,r+num[i],add-1,sub,mul,div);
            }
            if(sub > 0){
                dfs(i+1,r-num[i],add,sub-1,mul,div);
            }
            if(mul>0){
                dfs(i+1,r*num[i],add,sub,mul-1,div);
            }
            if(div>0){
                dfs(i+1,r/num[i],add,sub,mul,div-1);
            }
        }
    }
}
int main(){
    fast();
    cin >> n;
    int add,sub,mul,div;
    for(int i=0;i<n;i++){
        cin >> num[i];
    }
    cin >> add >> sub >> mul >> div;
    dfs(1,num[0],add,sub,mul,div);
    cout << mmax << '\n' << mmin;
    return 0;
}
