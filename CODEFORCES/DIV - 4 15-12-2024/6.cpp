#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    int n , m , q;
    cin>>n>>m>>q;
    vector<int> a(n);
    vector<int> b(m);

    for(int i = 0 ; i<n ; i++){
        cin>>a[i];
    }

    for(int i = 0 ; i<m ; i++){
        cin>>b[i];
    }
    int currentSum = 0;
    vector<int> rowSum(n);
    for(int i = 0 ; i<n ; i++){
        int sum = 0;
        for(int j = 0 ; j<m ; j++){
            int val = a[i] * b[j];
            currentSum += (val);
            sum = sum + (val);
        }
        rowSum[i] = sum;
    }
    
    vector<int> colSum(m);
    for(int j  = 0 ; j<m ; j++){
        int sum = 0;
        for(int i = 0 ; i<n ; i++){
            sum += (a[i] * b[j]);
        }

        colSum[j] = sum;
    }

    unordered_set<int> s; // to be reduced
    for(int i = 0 ; i<n ; i++){
        for(int j = 0 ; j<m ; j++){
            s.insert(rowSum[i] + colSum[j] - (a[i] * b[j]));
        }
    }
    for(int i = 0 ; i<q ; i++){
        int requiredSum;
        cin>>requiredSum;
        int diff = currentSum - requiredSum;
        if(s.find(diff) != s.end()){
            cout<<"YES"<<endl;
        }
        else
        cout<<"NO"<<endl;
    }

}