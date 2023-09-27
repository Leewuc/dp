#include <iostream>
using namespace std;
void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int main(){
    fast();
    int n,m;
    int maxx = 0;
    int a = 0;
    int cnt = 0;
    int budget[100001];
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> budget[i];
        if(maxx < budget[i]){
            maxx = budget[i];
        }
    }
    cin >> m;
    while(a <= maxx){
        int mm = (a+maxx) / 2;
        int sum = 0;
        for(int i=0;i<n;i++){
            sum += (budget[i] > mm ? mm : budget[i]);
        }
        if(sum <= m){
            a = mm +1;
            cnt = (cnt > mm ? cnt : mm);
        }
        else{
            maxx = mm -1;
        }
    }
    cout << cnt << '\n';
    return 0;
}
