#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int max_val;
        cin>>max_val;
        cout<<"1 ";
        for(int i = 0 ; i<n-1 ; i++){
            int val;
            cin>>val;
            if(val > max_val){
                max_val = val;
                cout<<"1 ";
            }
            else{
                cout<<"0 ";
            }
        }
        cout<<endl;
    }
}