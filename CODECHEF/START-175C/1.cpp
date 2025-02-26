#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int cnt = 0;
        while(true){
            cnt++;
            if(n == 2){
                cout<<(cnt + 1)<<endl;
                break;
            }
            if(n == 1 || n == 3){
                cout<<(cnt)<<endl;
                break;
            }
            n -= 2;
        }
    }
}