#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string str;
        cin>>str;

        bool flag = true;

        for(auto ch : str){
            if(ch == 'z')
            continue;
            else{
                flag = false;
                break;
            }
        }

        if(flag){
            cout<<"-1"<<endl;
            continue;
        }

        for(int i = 0 ; i<n ; i++)
        cout<<"z";
        cout<<endl;
    }
}