#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int min_rent = INT_MAX;
        for(int i = 0 ; i<n ; i++){
            int imdb , rent;
            cin>>imdb>>rent;
            if(imdb >= 7){
                if(rent < min_rent)
                min_rent = rent;
            }
        }

        if(min_rent == INT_MAX)
        cout<<"-1"<<endl;
        else
        cout<<min_rent<<endl;
    }
}