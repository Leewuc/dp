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
    int hei[1001];
    cin >> n >> m;
    int m1 = m;
    for(int i=1;i<=n;i++){
        cin >> hei[i];
    }
    while(true){
        for(int i=1;i<=n;i++){
            if(m >= hei[i]){
                hei[i] = 987654321;
                m++;
            }
        }
        if(m == m1){
            break;
        }
        m1 = m;
    }
    cout << m;
    return 0;
}
