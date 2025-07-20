#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    int n;
    cin>>n;
    ll sum = 0;
    bool flag = true;
    for(int i = 0 ; i<n ; i++){
        int val;
        cin>>val;
        sum += val;
        double avg = (double)sum / (i + 1);
        if(avg < 40)
        flag = false;
    }

    if(flag)
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