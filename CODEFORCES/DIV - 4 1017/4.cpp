#include<bits/stdc++.h>
#define ll long long int
using namespace std;



void solve(){
        string seq , sound;
        cin>>seq>>sound;
        int i = 0 , j = 0;
        int n = seq.length() , m = sound.length();
        bool flag = true;
        while(j<m){
                int cnt1 = 0;
                int cnt2 = 0;
                char ch1 = seq[i];
                char ch2 = sound[j];
                if(ch1 != ch2){
                        cout<<"NO"<<endl;
                        flag = false;
                        break;
                }
                while(i < n){
                        if(seq[i] == ch1){
                                cnt1++;
                                i++;
                        }
                        else
                        break;
                }

                while(j < m){
                        char ch = sound[j];
                        if(sound[j] == ch2){
                                cnt2++;
                                j++;
                        }
                        else
                        break;
                }
                // cout<<cnt1<<" "<<cnt2<<endl;
                if(cnt1 <= cnt2 && cnt2 <= 2 * cnt1)
                continue;
                else{
                        cout<<"NO"<<endl;
                        flag = false;
                        break;
                }
        }

        if(flag && i == n && j == m)
        cout<<"YES"<<endl;
        else if(flag)
        cout<<"NO"<<endl;
}

int main(){
        int t;
        cin>>t;

        while(t--){
                solve();
        }
}