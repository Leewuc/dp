#include <iostream>
#include <cmath>
using namespace std;
int visited[236196];
int n;
int cnt = 0;
void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
void dfs(int a){
    int next = 0;
    visited[a-1]++;
    while(a >0){
        next += (int)pow(a%10,n);
        a/=10;
    }
    if(visited[next-1] == 2){
        return;
    }
    dfs(next);
    if(visited[a-1] == 1){
        cnt++;
    }
}
int main(){
    fast();
    int A;
    cin >> A >> n;
    dfs(A);
    cout << cnt;
    return 0;
}
