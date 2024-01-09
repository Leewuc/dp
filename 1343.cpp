#include <iostream>
#include <string.h>
using namespace std;
void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int main(){
    fast();
    string s;
    string rst = "";
    int cnt = 0;
    int tmp = 0;
    cin >> s;
    for(int i=0;i<s.size();i++){
        if(s[i] == '.'){
            if(cnt%2 != 0){
                tmp = -1;
                cout << tmp;
                return 0;
            }
            else if(cnt%2 == 0){
                while(1){
                    if(cnt == 0){
                        break;
                    }
                    if(cnt >= 4){
                        rst = rst+"AAAA";
                        cnt = cnt-4;
                    }
                    else if(cnt >= 2 && cnt < 4){
                        rst = rst +"BB";
                        cnt = cnt-2;
                    }
                }
            }
            cnt = 0;
            rst = rst+'.';
        }
        else if(s[i] == 'X'){
            cnt++;
        }
    }
    if(cnt %2!=0){
        tmp = -1;
        cout << tmp;
        return 0;
    }
    else{
        while(1){
            if(cnt==0){
                break;
            }
            if(cnt >= 4){
                rst = rst+"AAAA";
                cnt = cnt-4;
            }
            else if(cnt>=2 && cnt<4){
                rst = rst+"BB";
                cnt=cnt-2;
            }
        }
    }
    cout << rst;
    return 0;
}
