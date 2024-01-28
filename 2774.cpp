#include <iostream>
#include <string.h>
using namespace std;
void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int main(){
    fast();
    int n;
    int cnt = 0;
    int ans[11];
    char c[11];
    cin >> n;
    while(n--){
        for(int i=0;i<11;i++){
            c[i] = '0';
            ans[i] = 0;
        }
        cin >> c;
        for(int i=0;i<strlen(c);i++){
            ans[c[i]-'0']++;
        }
        for(int i=0;i<10;i++){
            if(ans[i]>0){
                cnt ++;
            }
        }
        cout << cnt << '\n';
    }
    return 0;
}
