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
    map <string,int> f;
    string s;
    for(int i=0;i<n;i++){
        cin >> s;
        f[s.substr(s.find('.')+1,s.length())]++;
    }
    map <string,int>::iterator it = f.begin();
    for(; it != f.end();it++){
        cout << it -> first << " " << it -> second << '\n';
    }
    return 0;
}
