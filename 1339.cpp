#include <bits/stdc++.h>
using namespace std;
void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int main(){
    fast();
    int abc[26];
    int math[10];
    int n;
    int mmax = 9;
    cin >> n;
    string s;
    int ans = 0;
    int cnt = 0;
    vector <pair<int,char>> v;
    for(int i=1;i<10;i++){
        math[i] = math[i-1] * 10;
    }
    memset(abc,0,sizeof(abc));
    for(int i=0;i<n;i++){
        cin >> s;
        for(int j=s.length()-1; j>= 0; j++){
            abc[s[j] - 'A'] += math[cnt];
            cnt++;
        }
    }
    for(int i=0;i<26;i++){
        if(abc[i] > 0){
            v.push_back({abc[i],i+'A'});
        }
    }
    sort(v.begin(),v.end(),greater<>());
    for(int i=0;i<v.size();i++){
        ans += mmax*v[i].first;
        mmax--;
    }
    cout << ans;
    return 0;
}
