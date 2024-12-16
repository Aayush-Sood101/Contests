#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        unordered_set<int> s;
        for(int i = 0 ; i<n ; i++){
            int val;
            cin>>val;
            v[i] = val;
            s.insert(val);
        }

        unordered_set<int> marked;
        int startFrom = 1;
        for(int i = 0 ; i<n ; i++){
            int val = v[i];
            if(marked.find(val) != marked.end()){
                while(s.find(startFrom) != s.end() || marked.find(startFrom) != marked.end()){
                    startFrom++;
                }
                cout<<startFrom<<" ";
                startFrom++;
            }
            else{
                cout<<val<<" ";
                marked.insert(val);

            }
        }
        cout<<endl;

    }
}