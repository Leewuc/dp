#include <bits/stdc++.h>
using namespace std;
void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int n,m;
vector <string> s;
bool ch[10];
set <int> ss;
void card(int a,string s1){
    if(a == m){
        int st = stoi(s1);
        ss.insert(st);
        return;
    }
    else{
        for(int i=0;i<n;i++){
            if(!ch[i]){
                ch[i] = true;
                card(a+1,s1+s[i]);
                ch[i] = false;
            }
        }
    }
}
int main(){
    fast();
    cin >> n >> m;
    string s1;
    for(int i=0;i<n;i++){
        cin >> s1;
        s.push_back(s1);
    }
    card(0,s1);
    cout << ss.size();
    return 0;
}
