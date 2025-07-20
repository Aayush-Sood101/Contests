#include<bits/stdc++.h>
#define ll long long int
using namespace std;


//copy map2 to map1
void copyMap(unordered_map<int , int> &mp1 , unordered_map<int , int> &mp2){
        for(auto p: mp2){
                int val = p.first;
                int freq = p.second;

                mp1[val] = freq;
        }
}

void eraseMap(unordered_map<int , int> &mp2){
        mp2.clear();
}

int main(){
        int t;
        cin>>t;
        while(t--){
                int n;
                cin>>n;

                vector<int> v(n);
                for(int i = 0 ; i<n ; i++)
                cin>>v[i];

                unordered_map<int , int> mp1;
                unordered_map<int , int> mp2;

                mp1[v[0]]++;
                
                int cnt = 1;
                for(int i = 1 ; i<n ; i++){
                        int ele = v[i];
                        mp2[ele]++;
                        if(mp1.find(ele) != mp1.end()){
                                mp1[ele]--;
                                if(mp1[ele] == 0)
                                mp1.erase(ele);
                        }

                        if(mp1.size() == 0){
                                cnt++;
                                copyMap(mp1 , mp2);
                                eraseMap(mp2);
                        }
                }

                cout<<cnt<<endl;
        }
}