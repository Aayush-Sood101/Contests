#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin >> n;
    vector<ll> A(n), B(n);
    for(int i = 0; i < n; i++) cin >> A[i];
    for(int i = 0; i < n; i++) cin >> B[i];
    vector<pair<ll,ll>> snacks(n);
    for(int i = 0; i < n; i++){
        snacks[i] = { B[i], A[i] };
    }
    sort(snacks.begin(), snacks.end(),
         [](auto &x, auto &y){ return x.first < y.first; });

    ll sumPosTastiness = 0;
    ll best = 0; 
    int i = 0;
    while(i < n){
        ll curL = snacks[i].first;
        while(i < n && snacks[i].first == curL){
            if(snacks[i].second > 0)
                sumPosTastiness += snacks[i].second;
            i++;
        }
        best = max(best, sumPosTastiness - curL);
    }

    cout << best << "\n";
}

int main(){

    int T;
    cin >> T;
    while(T--){
        solve();
    }
    return 0;
}
