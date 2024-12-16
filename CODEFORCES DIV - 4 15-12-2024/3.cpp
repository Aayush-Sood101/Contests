#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int m , a , b , c;
        cin>>m>>a>>b>>c;
        int remA = 0 , remB = 0 ;
        ll sum = 0;
        if(m > a){
            remA = m - a;
            sum += a;
        }
        else
        sum += m;

        if(m > b){
            remB = m - b;
            sum += b;
        }
        else
        sum += m;
        

        ll totalLeft = remA + remB;
        if(totalLeft > c){
            sum += c;
        }
        else{
            sum += totalLeft;
        }
        cout<<sum<<endl;


    }
}