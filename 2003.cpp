#include <iostream>
#include <vector>
using namespace std;
void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int t_point(int n,int m,int arr[]){
    int a =0;
    int b=0;
    int cnt = 0;
    int sum=0;
    while(true){
        if(sum >= m){
            sum = sum-arr[a++];
        }
        else if(b == n){
            break;
        }
        else{
            sum = sum+arr[b++];
        }
        if(sum == m){
            cnt++;
        }
    }
    return cnt;
}
int main(){
    fast();
    int n,m;
    cin >> n >> m;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    cout << t_point(n,m,arr) <<'\n';
    return 0;
}
