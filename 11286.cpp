#include <bits/stdc++.h>
using namespace std;
void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int main(){
    fast();
    int n;
    cin >> n;
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
    int hea;
    while(n--){
        cin >> hea;
        if(hea == 0){
            if(pq.empty()){
                cout << "0" << '\n';
            }
            else{
                cout << pq.top().second << '\n';
                pq.pop();
            }
        }
        else{
            pq.push(make_pair(abs(hea),hea));
        }
    }
    return 0;
}
