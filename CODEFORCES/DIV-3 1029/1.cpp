#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
        int t;
        cin>>t;
        while(t--){
                int n , x;
                bool flag = true;
                bool flag1 = false;
                cin>>n>>x;

                vector<int> v(n);
                for(int i = 0 ; i<n ; i++){
                        cin>>v[i];
                }

                int i = 0;
                while(i<n){
                        if(v[i] == 0)
                        i++;
                        else{
                                if(flag){
                                        flag = false;
                                        i += x;
                                }
                                else{
                                        flag1 = true;
                                        break;
                                }
                        }
                }
                if(flag1){
                        cout<<"NO"<<endl;
                        continue;
                }
                if(i >= n)
                cout<<"YES"<<endl;
        }
}