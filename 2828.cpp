#include <iostream>
using namespace std;
void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int main(){
    fast();
    int n,m,k;
    int cnt = 0;
    int rst = 0;
    cin >> n >> m >> k;
    int a = 0;
    int b = m;
    while(k--){
        int l;
        cin >> l;
        int tmp;
        if(l > b){
            tmp = l - b;
            rst += tmp;
            b += tmp;
            a += tmp;
        }
        else if(l <= a){
            tmp = a - l +1;
            rst += tmp;
            a -= tmp;
            b -= tmp;
        }
    }
    cout << rst;
    return 0;
}
