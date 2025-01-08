#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int k , l1 , r1 , l2 , r2;
        cin>>k>>l1>>r1>>l2>>r2;

        ll cnt = 0;

        int x = l1;
        while(x <= r1){
            ll kpower = 1;
            while(true){
                ll p = x * kpower;
                if(l2 <= p && p<=r2){
                    cnt++;
                }
                else if(p > r2)
                break;
                kpower *= k;
            }
            x++;
        }

        cout<<cnt<<endl;
    }
}