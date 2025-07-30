#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    int n , k;
    cin>>n>>k;

    priority_queue<ll , vector<ll> , greater<ll>> pq; // minHeap
    ll sum = 0;

    for(int i = 0 ; i<n ; i++){
        ll val;
        cin>>val;
        sum += val;
        pq.push(val); 
    }
    ll avg = 0;
    while(k--){
        ll val1 = pq.top();
        pq.pop();
        ll val2 = pq.top();
        pq.pop();

        avg = val1 + val2;
        if(avg % 2 != 0)
        avg += 1;

        avg /= 2;
        sum += avg;

        if(val1 + 1 == avg)
        break;
        
        pq.push(avg);
        pq.push(val1);
        pq.push(val2);
    }

    cout<<(sum + avg * k)<<endl;
}

int main(){
    int t;
    cin>>t;

    while(t--){
        solve();
    }
}