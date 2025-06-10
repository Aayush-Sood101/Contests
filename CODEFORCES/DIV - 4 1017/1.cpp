#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
        string str;
        
        getline(cin , str);

        stringstream ss(str);
        string temp;
        string ans = "";

        while(ss >> temp){
                ans = ans + temp[0];
        }

        cout<<ans<<endl;
}

int main(){
        int t;
        cin>>t;
        cin.ignore();
        while(t--){
                solve();
        }
}