#include <iostream>
using namespace std;
void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int main(){
    fast();
    int tri[51];
    int summ[4001];
    int n,m;
    cin >> n;
    for(int i=1;i<=45;i++){
        tri[i] = i * (i+1)/2;
    }
    for(int i=1;i<=45;i++){
        for(int j=1;j<=45;j++){
            for(int k=1;k<=45;k++){
                summ[tri[i]+tri[j]+tri[k]] = 1;
            }
        }
    }
    while(n--){
        cin >> m;
        if(summ[m] == 1){
            cout << "1" << '\n';
        }
        else{
            cout << "0" << '\n';
        }
    }
    return 0;
}
