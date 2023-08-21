#include <iostream>
#include <vector>
using namespace std;
void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int main(){
    fast();
    int n,m;
    cin >> n;
    vector <int> v;
    while(n-- > 0){
        cin >> m;
        v.push_back(m);
    }
    cout << "1" << ' ';
    int list = v[0];
    int cnt = 0;
    int ccnt = list;
    for(int i=1;i<v.size();i++){
        if(list > 0){
            while(ccnt > 0){
                cnt = (cnt+1 > v.size()-1) ? 0 : cnt + 1;
                if(v[cnt] != 0){
                    ccnt--;
                }
            }
        }
        else{
            ccnt *= -1;
            while(ccnt > 0){
                cnt = (cnt-1 < 0) ? v.size()-1 : cnt-1;
                if(v[cnt] != 0){
                    ccnt--;
                }
            }
        }
        list = v[cnt];
        v[cnt] = 0;
        cout << cnt+1 << ' ';
    }
    return 0;
}
