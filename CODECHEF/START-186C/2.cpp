#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int sum = 0;
        vector<int> v(5);
        for(int i = 0; i<5 ; i++){
            cin>>v[i];
            sum += v[i];
        }

        if(sum >= 35){
            cout<<"0"<<endl;
            continue;
        }
        int coins = 0;
        sort(v.begin() , v.end());

        for(auto ele: v){
            coins += 100;
            sum += (10 - ele);
            if(sum >= 35)
            break;
        }

        cout<<coins<<endl;

    }
}