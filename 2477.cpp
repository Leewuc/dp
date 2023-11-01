#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int main(){
    fast();
    int n,m,k;
    int cnt = -1;
    int wei = 0;
    int hei = 0;
    vector<pair<int,int>> v;
    cin >> k;
    for(int i=0;i<6;i++){
        cin >> n >> m;
        v.push_back(make_pair(n,m));
        if(n >= 3){
            hei += m;
        }
        else{
            wei += m;
        }
    }
    hei /= 2;
    wei /= 2;
    for(int i=0;i<6;i++){
        if(v[i].second == hei || v[i].second == wei){
            int a = i+1;
            if(a > 5){
                a = 0;
            }
            if(v[a].second == wei || v[a].second == hei){
                cnt = a;
                break;
            }
        }
    }
    int dx = cnt +2;
    int dy = cnt +3;
    if(dx > 5){
        dx -= 6;
    }
    if(dy > 5){
        dy -= 6;
    }
    int x = hei*wei;
    int y = v[dx].second * v[dy].second;
    cout << (x - y)* k << '\n';
    return 0;
}
