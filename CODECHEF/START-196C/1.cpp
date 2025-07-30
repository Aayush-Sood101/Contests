#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    int n , c;
    cin>>n>>c;

    vector<int> v(n);
    for(int i = 0 ; i<n ; i++){
        cin>>v[i];
    }

    sort(v.begin() , v.end());
    int cnt = 0;
    if(v[0] < c){
        while(true){
            bool flag = true;
            for(int i = 1 ; i<n ; i++){
                if(v[i] == c){
                    cnt++;
                    c++;
                    flag = false;
                    break;
                }
            }
            if(flag)
            break;
        }
    }
    else{
        cnt = v[0] - c + 1;
        c = v[0] + 1;
        while(true){
            bool flag = true;
            for(int i = 1 ; i<n ; i++){
                if(v[i] == c){
                    cnt++;
                    c++;
                    flag = false;
                    break;
                }
            }
            if(flag)
            break;
        }
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