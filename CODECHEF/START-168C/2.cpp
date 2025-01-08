#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int len;
        cin>>len;
        string a , b;
        cin>>a>>b;
        int p00 = 0 , p01 = 0 , p11 = 0;
        for(int i = 0 ; i<len ; i++){
            char ch1 = a[i];
            char ch2 = b[i];
            if(ch1 == '0' && ch2 == '0')
            p00++;
            else if((ch1 == '0' && ch2 == '1') || (ch1 == '1' && ch2 == '0'))
            p01++;
            else
            p11++;
        }
        int sum = p11;
        if((sum % 2 != 0 )|| (sum % 2 == 0 && p01 >= 1))
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}