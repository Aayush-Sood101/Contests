#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    int n , x , y;
    cin>>n>>x>>y;
    int cnt = 0;
    for(int i = 0 ; i<n ; i++){
        int val;
        cin>>val;
        if(x <= val && val <= y)
        cnt++;
    }

    cout<<cnt<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}