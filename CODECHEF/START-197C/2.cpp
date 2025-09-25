#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    int n;
    cin>>n;
    int cntOdd = 0;
    int cntEven = 0;
    while(n--){
        int val;
        cin>>val;
        if(val % 2 != 0)
        cntOdd++;
        else
        cntEven++;
    }

    if(cntOdd == 1)
    cout<<"Yes"<<endl;
    else
    cout<<"No"<<endl;

}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}