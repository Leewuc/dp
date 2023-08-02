#include <bits/stdc++.h>
using namespace std;
void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int arr[1000000];
int n,m;
long long len(int k){
    long long a = 0;
    for(int i=0;i<n;i++){
        if(arr[i] > k){
            a += arr[i] - k;
        }
    }
    return a;
}
int main(){
    fast();
    cin >> n >> m;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int h,height;
    int low = 0;
    long long a;
    h = *max_element(arr,arr+m) - 1;
    while(h > low){
        height = (h+low)/2;
        a = len(height);
        if(a >= m && len(height+1) < m){
            break;
        }
        else if(a < m){
            h = height - 1;
        }
        else if(a > m){
            low = height + 1;
        }
    }
    cout << (h+low)/2;
    return 0;
}
