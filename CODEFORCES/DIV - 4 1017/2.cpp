#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
        int n , m , l , r;
        cin>>n>>m>>l>>r;

        int i = 0 , j = 0;
        int cnt = 0;
        while(cnt < m){
                if(i > l)
                i--;
                else if(j < r)
                j++;

                cnt++;
        }

        cout<<i<<" "<<j<<endl;
}

int main(){
        int t;
        cin>>t;
        while(t--){
                solve();
        }
}