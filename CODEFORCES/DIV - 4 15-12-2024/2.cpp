#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        reverse(str.begin() , str.end());

        string ans = "";

        for(int i = 0 ; i<str.length() ; i++){
            char ch = str[i];
            if(ch == 'p')
            ans += 'q';
            else if(ch == 'q')
            ans += 'p';
            else
            ans += 'w';
        }

        cout<<ans<<endl;
    }
}