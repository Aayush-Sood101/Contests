#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    int n , m;
    cin>>n>>m;
    unordered_set<int> s;
    for(int  i = 0 ; i<n ; i++){
        int val;
        cin>>val;
        s.insert(val);
    }

    if(s.size() > m)
    cout<<"0"<<endl;
    else
    cout<<(m - s.size())<<endl;
}


int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}