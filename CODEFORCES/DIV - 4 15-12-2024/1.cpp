#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        if(n % 2 == 0){
            int val = ((n - 1) / 2) * 2 + 1;
            cout<<val<<endl;
        }
        else{
            int val = (n / 2) * 2;
            cout<<val<<endl;
        }
    }
}