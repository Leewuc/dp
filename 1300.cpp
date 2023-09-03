#include <iostream>
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
    cin >> n >> m;
    int cnt = 1;
    int ccnt = 0;
    int result = -1;
    while(cnt <= m){
        for(int i=1;i<=n;i++){
            ccnt += min(((cnt+m)/2)/i,n);
        }
        if(ccnt < m){
            cnt = (cnt+m)/2 + 1;
        }
        else{
            m = (cnt+m)/2 - 1;
            result = (cnt+m)/2;
        }
    }
    cout << result << '\n';
    return 0;
}
