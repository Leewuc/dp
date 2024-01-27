#include <iostream>
using namespace std;
void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int main(){
    fast();
    int cnt = 0;
    int n1,n2,n3;
    int m1,m2,m3;
    cin >> n1 >> n2 >> n3;
    cin >> m1 >> m2 >> m3;
    if (m1 - n1 == 0){
        cnt = 0;
    }
    else if(m1 - n1 == 1){
        if(m2 == n2){
            if(m3 >= n3){
                cnt = 1;
            }
            else{
                cnt = 0;
            }
        }
        else if(m2 > n2){
            cnt = 1;
        }
        else{
            cnt = 0;
        }
    }
    else{
        if(m2 == n2){
            if(m3 >= n3){
                cnt = 2;
            }
            else{
                cnt = 1;
            }
        }
        else if(m2 > n2){
            cnt = 2;
        }
        else{
            cnt = 1;
        }
    }
    if(m1 - n1 < 2){
        cout << cnt << " " << m1- n2+1 << " " << m1-n1 << '\n';
    }
    else{
        cout << m1-n1+cnt-2 << " " << m1-n1 +1 << " " << m1 -n1 << '\n';
    }
    return 0;
}
