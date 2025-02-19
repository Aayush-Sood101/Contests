#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v;
        for(int i = 0 ; i<n ; i++){
            int ele;
            cin>>ele;
            v.push_back(ele);
        }
        int cnt = 0;
        unordered_set<int> s;
        for(int i = 0 ; i<v.size() ; i++){
            int ele = v[i];
            if(s.find(ele) != s.end()){
                v.push_back(0);
                s.erase(ele);
                cnt--;
            }
            else{
                cnt++;
                s.insert(ele);
            }
        }
        
        cout<<cnt<<endl;

    }
}