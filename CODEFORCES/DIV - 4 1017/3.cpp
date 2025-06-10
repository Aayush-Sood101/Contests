#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
        int n;
        cin>>n;

        vector<int> ans(2 * n);
        unordered_set<int> s;
        for(int i = 0 ; i<n ; i++){
                for(int j = 0 ; j<n ; j++){
                        int ele;
                        cin>>ele;
                        s.insert(ele);
                        ans[i + j + 1] = ele;
                }
        }

        for(int i = 1 ; i<=2*n ; i++){
                if(s.find(i) != s.end()){
                        continue;
                }
                else{
                        ans[0] = i;
                        break;
                }
        }

        for(int i = 0 ; i<2*n ; i++)
        cout<<ans[i]<<" ";

        cout<<endl;
}

int main(){
        int t;
        cin>>t;

        while(t--){
                solve();
        }
}