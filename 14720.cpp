#include <iostream>
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
    int chk = 0;
    int milk;
    cin >> n;
    while(1){
        cin >> chk;
        if(chk == 0){
            break;
        }
        else{
            n--;
        }
    }
    cnt++;
    for(int i=0;i<n;i++){
        cin >> milk;
        if(chk == 0 && milk == 1){
            cnt++;
            chk = milk;
        }
        else if(chk == 1 && milk == 2){
            cnt++;
            chk = milk;
        }
        else if(chk == 2 && milk ==0){
            cnt++;
            chk = milk;
        }
    }
    cout << cnt;
    return 0;
}
