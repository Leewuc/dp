#include <iostream>
using namespace std;
void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int main(){
    fast();
    int a,b,c,d,e,f;
    cin >> a>>b>>c>>d>>e>>f;
    for(int i= -999;i<=999;i++){
        for(int j=-999;j<=999;j++){
            if(a*i + b*j == c){
                if(d*i + e*j == f){
                    cout << i << ' ' << j;
                    break;
                }
            }
        }
    }
    return 0;
}