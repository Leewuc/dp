#include <bits/stdc++.h>
using namespace std;
void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
bool tf(pair<string,string> s1,pair<string,string> s2);
int main(){
    fast();
    int n,m;
    string s;
    vector<pair<string,string>> v;
    pair<string,string> s1;
    cin >> n >> m;
    for(int i=0;i<n;i++){
        cin >> s1.first >> s1.second;
        v.push_back(s1);
    }
    sort(v.begin(),v.end(),tf);
    for(int i=0;i<m;i++){
        cin >> s;
        int a = 0;
        int b = v.size()-1;
        int ab = (a+b)/2;
        while(a <= b){
            ab = (a+b)/2;
            if(v[ab].first == s){
                break;
            }
            else if(v[ab].first < s){
                a = ab+1;
            }
            else{
                b = ab-1;
            }
        }
        cout << v[ab].second << '\n';
    }
    return 0;
}
bool tf(pair<string,string> s1,pair<string,string> s2){
    return s1.first < s2.first;
}
